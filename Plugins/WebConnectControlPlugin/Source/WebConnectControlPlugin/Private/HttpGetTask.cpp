#include "HttpGetTask.h"
#include "libwebsockets.h"
#include "Logging/LogMacros.h"

void FHttpGetTask::DoWork()
{
    struct lws_context_creation_info info;
    memset(&info, 0, sizeof(info));
    info.port = CONTEXT_PORT_NO_LISTEN;
    info.protocols = CustomLws::my_protocols;
    info.gid = -1;
    info.uid = -1;

    struct lws_context* context = lws_create_context(&info);
    if (!context) {
        UE_LOG(LogTemp, Error, TEXT("libwebsockets context creation failed"));
        return;
    }

    struct lws_client_connect_info ccinfo = { 0 };
    ccinfo.context = context;
    ccinfo.address = TCHAR_TO_ANSI(*Url);
    ccinfo.port = 80;
    ccinfo.path = "/";
    ccinfo.host = lws_canonical_hostname(context);
    ccinfo.origin = "origin";
    ccinfo.protocol = CustomLws::my_protocols[0].name;
    ccinfo.ssl_connection = 0;

    struct lws* wsi = lws_client_connect_via_info(&ccinfo);
    if (!wsi) {
        UE_LOG(LogTemp, Error, TEXT("Client connection failed"));
    }

    int n = 0;
    while (n >= 0) {
        n = lws_service(context, 100);
    }

    lws_context_destroy(context);
}
