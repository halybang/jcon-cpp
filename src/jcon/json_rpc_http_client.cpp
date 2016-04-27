#include "json_rpc_http_client.h"
#include "json_rpc_http_socket.h"

#include <memory>

namespace jcon {

JsonRpcHttpSocketClient::JsonRpcHttpSocketClient(
    QObject* parent,
    std::shared_ptr<JsonRpcLogger> logger)
    : JsonRpcClient(std::make_shared<JsonRpcHttpSocket>(), parent, logger)
{

}

JsonRpcHttpSocketClient::~JsonRpcHttpSocketClient()
{
}

}
