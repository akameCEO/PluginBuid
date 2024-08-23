#include "WebConnectControlPluginBPLibrary.h"
#include "WebConnectControlPlugin.h"
#include "HttpGetTask.h" 

#define UI OpenSSL_UI
#include <openssl/ossl_typ.h>
#undef UI

// Include libwebsockets headers
#include "libwebsockets.h"

// 名前空間の定義
namespace CustomLws {
    // コールバック関数の定義
    static int callback_function(struct lws *wsi, enum lws_callback_reasons reason, void *user, void *in, size_t len) {
        switch (reason) {
            case LWS_CALLBACK_CLIENT_ESTABLISHED:
                UE_LOG(LogTemp, Log, TEXT("Connection established"));
                break;
            case LWS_CALLBACK_CLIENT_RECEIVE:
                // データを受信した場合の処理
                UE_LOG(LogTemp, Log, TEXT("Received data: %s"), ANSI_TO_TCHAR((const char *)in));
                break;
            case LWS_CALLBACK_CLIENT_CLOSED:
                UE_LOG(LogTemp, Log, TEXT("Connection closed"));
                break;
            default:
                break;
        }
        return 0;
    }

    struct lws_protocols my_protocols[] = {
        { "http", callback_function, 0, 0 },
        { NULL, NULL, 0, 0 } // 終端
    };
}

UWebConnectControlPluginBPLibrary::UWebConnectControlPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
}

void UWebConnectControlPluginBPLibrary::SimpleHttpGet(const FString& Url)
{
    (new FAutoDeleteAsyncTask<FHttpGetTask>(Url))->StartBackgroundTask();
}
