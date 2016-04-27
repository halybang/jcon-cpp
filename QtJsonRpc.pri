#-------------------------------------------------
#
# Project created by QtCreator 2016-04-27T04:35:46
#
#-------------------------------------------------

QT  += network
QT  += websockets
QT  += testlib

CONFIG += c++1y
QMAKE_CXXFLAGS  +=-std=c++1y
QMAKE_LFLAGS    +=-std=c++1y

JSON_PATH=jcon-cpp/src/jcon
message($$JSON_PATH)
HEADERS += $$JSON_PATH/jcon.h
HEADERS += $$JSON_PATH/jcon_assert.h
HEADERS += $$JSON_PATH/json_rpc_client.h
HEADERS += $$JSON_PATH/json_rpc_endpoint.h
HEADERS += $$JSON_PATH/json_rpc_error.h
HEADERS += $$JSON_PATH/json_rpc_file_logger.h
HEADERS += $$JSON_PATH/json_rpc_logger.h
HEADERS += $$JSON_PATH/json_rpc_request.h
HEADERS += $$JSON_PATH/json_rpc_result.h
HEADERS += $$JSON_PATH/json_rpc_server.h
HEADERS += $$JSON_PATH/json_rpc_socket.h
HEADERS += $$JSON_PATH/json_rpc_success.h
HEADERS += $$JSON_PATH/json_rpc_tcp_client.h
HEADERS += $$JSON_PATH/json_rpc_tcp_server.h
HEADERS += $$JSON_PATH/json_rpc_tcp_socket.h
HEADERS += $$JSON_PATH/json_rpc_http_client.h
HEADERS += $$JSON_PATH/json_rpc_http_socket.h
HEADERS += $$JSON_PATH/json_rpc_websocket.h
HEADERS += $$JSON_PATH/json_rpc_websocket_client.h
HEADERS += $$JSON_PATH/json_rpc_websocket_server.h
HEADERS += $$JSON_PATH/string_util.h

SOURCES += $$JSON_PATH/json_rpc_client.cpp
SOURCES += $$JSON_PATH/json_rpc_endpoint.cpp
SOURCES += $$JSON_PATH/json_rpc_error.cpp
SOURCES += $$JSON_PATH/json_rpc_file_logger.cpp
SOURCES += $$JSON_PATH/json_rpc_logger.cpp
SOURCES += $$JSON_PATH/json_rpc_request.cpp
SOURCES += $$JSON_PATH/json_rpc_server.cpp
SOURCES += $$JSON_PATH/json_rpc_success.cpp
SOURCES += $$JSON_PATH/json_rpc_tcp_client.cpp
SOURCES += $$JSON_PATH/json_rpc_tcp_server.cpp
SOURCES += $$JSON_PATH/json_rpc_tcp_socket.cpp
SOURCES += $$JSON_PATH/json_rpc_http_client.cpp
SOURCES += $$JSON_PATH/json_rpc_http_socket.cpp
SOURCES += $$JSON_PATH/json_rpc_websocket.cpp
SOURCES += $$JSON_PATH/json_rpc_websocket_client.cpp
SOURCES += $$JSON_PATH/json_rpc_websocket_server.cpp
SOURCES += $$JSON_PATH/string_util.cpp

