#include "WebClientBlueprintLibrary.h"
#include "libwebsockets.h"

static int callback_http(struct lws *wsi, enum lws_callback_reasons reason,
                         void *user, void *in, size_t len) {
    switch (reason) {
        case LWS_CALLBACK_CLIENT_ESTABLISHED:
            UE_LOG(LogTemp, Log, TEXT("Connection established"));
            break;

        case LWS_CALLBACK_CLIENT_RECEIVE:
            UE_LOG(LogTemp, Log, TEXT("Received data: %s"), ANSI_TO_TCHAR((const char *)in));
            break;

        case LWS_CALLBACK_CLIENT_CONNECTION_ERROR:
            UE_LOG(LogTemp, Error, TEXT("Connection error"));
            break;

        case LWS_CALLBACK_COMPLETED_CLIENT_HTTP:
            lws_context_destroy(lws_get_context(wsi));
            break;

        default:
            break;
    }
    return 0;
}

void UWebClientBlueprintLibrary::GetRequest(const FString& URL)
{
    struct lws_context_creation_info info;
    memset(&info, 0, sizeof info);
    info.port = CONTEXT_PORT_NO_LISTEN;
    info.protocols = new lws_protocols[2];
    info.protocols[0].name = "http";
    info.protocols[0].callback = callback_http;
    info.protocols[0].rx_buffer_size = 0;
    info.protocols[1].name = nullptr;

    struct lws_context* context = lws_create_context(&info);
    if (!context) {
        UE_LOG(LogTemp, Error, TEXT("libwebsocket context creation failed"));
        return;
    }

    struct lws_client_connect_info connectInfo = {};
    connectInfo.context = context;
    connectInfo.address = TCHAR_TO_UTF8(*URL);
    connectInfo.port = 80;
    connectInfo.path = "/";
    connectInfo.host = connectInfo.address;
    connectInfo.origin = connectInfo.address;
    connectInfo.protocol = "http";

    struct lws* wsi = lws_client_connect_via_info(&connectInfo);
    if (!wsi) {
        UE_LOG(LogTemp, Error, TEXT("WebSocket connection failed"));
        lws_context_destroy(context);
        return;
    }

    while (lws_service(context, 0) >= 0) {
        // イベントループを実行し、応答を待ちます
    }

    delete[] info.protocols;
}
