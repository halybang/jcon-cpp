#ifndef JSON_RPC_WEBSOCKET_H
#define JSON_RPC_WEBSOCKET_H

#include "jcon.h"
#include "json_rpc_socket.h"
#include <QNetworkAccessManager>
#include <QUrl>
class QNetworkAccessManager;
class QNetworkReply;

namespace jcon {

class JCON_API JsonRpcHttpSocket : public JsonRpcSocket
{
    Q_OBJECT

public:
    /**
     * Default constructor. Create a new JsonRpcHttpSocket.
     */
    JsonRpcHttpSocket();

    /**
     * Constructor taking a previously created socket. This is used by
     * JsonRpcServer, since QWebSocketServer::nextPendingConnection() returns
     * an already created socket for the client connection.
     *
     * @param[in] socket The WebSocket to use.
     */
    JsonRpcHttpSocket(QNetworkAccessManager* socket);

    virtual ~JsonRpcHttpSocket();

    void connectToHost(QString host, int port) override;
    bool waitForConnected(int msecs) override;
    void disconnectFromHost() override;
    bool isConnected() const override;
    void send(const QByteArray& data) override;
    QString errorString() const override;
    QHostAddress localAddress() const override;
    int localPort() const override;
    QHostAddress peerAddress() const override;
    int peerPort() const override;

private slots:
    void dataReady(QNetworkReply * reply);
    void sslErrors(QNetworkReply * reply, const QList<QSslError> & errors);
private:
    void setupSocket();

    //QWebSocket* m_socket;
    QNetworkAccessManager *m_socket;
    QUrl m_url;
};

}

#endif
