// Copyright Epic Games, Inc. All Rights Reserved.

#include "WebControlAPluginBPLibrary.h"
#include "WebControlAPlugin.h"
#include <libwebsockets.h>


UWebControlAPluginBPLibrary::UWebControlAPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UWebControlAPluginBPLibrary::WebControlAPluginSampleFunction(float Param)
{
	return -1;
}

static int callback_http(struct lws *wsi, enum lws_callback_reasons reason, void *user, void *in, size_t len)
{
    switch (reason) {
        case LWS_CALLBACK_CLIENT_RECEIVE:
            UE_LOG(LogTemp, Log, TEXT("データ受信: %s"), (char *)in);
            break;
        case LWS_CALLBACK_CLIENT_CONNECTION_ERROR:
            UE_LOG(LogTemp, Error, TEXT("接続エラー"));
            break;
        case LWS_CALLBACK_CLIENT_ESTABLISHED:
            UE_LOG(LogTemp, Log, TEXT("接続確立"));
            break;
        default:
            break;
    }
    return 0;
}

static struct lws_protocols protocols[] = {
    {
        "http",
        callback_http,
        0,
        1024,
    },
    { NULL, NULL, 0, 0 } // 終了
};


void HttpGetExample()
{
    struct lws_context_creation_info info;
    struct lws_client_connect_info connect_info;
    struct lws_context *context;
    struct lws *wsi;

    memset(&info, 0, sizeof info);
    info.port = CONTEXT_PORT_NO_LISTEN; // サーバー機能は不要
    info.protocols = protocols;         // カスタムプロトコルを追加

    context = lws_create_context(&info); // lwsコンテキストの作成
    if (!context) {
        UE_LOG(LogTemp, Error, TEXT("lwsコンテキストの作成に失敗しました"));
        return;
    }

    memset(&connect_info, 0, sizeof(connect_info));
    connect_info.context = context;
    connect_info.address = "www.example.com"; // 接続するウェブサイト
    connect_info.port = 80;                    // HTTPポート
    connect_info.path = "/";                   // ウェブサイト上のパス
    connect_info.host = lws_canonical_hostname(context);
    connect_info.origin = "origin";
    connect_info.protocol = lws_get_protocol(context, 0);

    wsi = lws_client_connect_via_info(&connect_info);
    if (!wsi) {
        UE_LOG(LogTemp, Error, TEXT("クライアント接続に失敗しました"));
        lws_context_destroy(context);
        return;
    }

    // WebSocket用のイベントループを処理
    while (lws_service(context, 0) >= 0) {
        // 接続が終了するかエラーが発生するまでループを続行
    }

    lws_context_destroy(context);
}

