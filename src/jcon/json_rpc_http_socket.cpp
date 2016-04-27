#include "json_rpc_http_socket.h"
#include "jcon_assert.h"

#include <QSignalSpy>
#include <QTime>
#include <QNetworkAccessManager>
#include <QNetworkCookieJar>
#include <QNetworkRequest>
#include <QNetworkReply>

namespace jcon {

JsonRpcHttpSocket::JsonRpcHttpSocket()
    : m_socket(new QNetworkAccessManager)
{
    setupSocket();
}

JsonRpcHttpSocket::JsonRpcHttpSocket(QNetworkAccessManager* socket)
    : m_socket(socket)
{
    setupSocket();
}

JsonRpcHttpSocket::~JsonRpcHttpSocket()
{
//    m_socket->disconnect(this);
//    m_socket->deleteLater();
}

void JsonRpcHttpSocket::setupSocket()
{
    m_socket->setCookieJar(new QNetworkCookieJar(m_socket));


    connect(m_socket, &QNetworkAccessManager::finished,
            this, &JsonRpcHttpSocket::dataReady);
    connect(m_socket, &QNetworkAccessManager::sslErrors,
            this, &JsonRpcHttpSocket::sslErrors);
}

void JsonRpcHttpSocket::connectToHost(QString host, int port)
{
//    QUrl url;
//    url.setScheme("http");
//    url.setHost(host);
//    url.setPort(port);
//    m_socket->open(url);
    m_socket->connectToHost(host, port);
}

bool JsonRpcHttpSocket::waitForConnected(int msecs)
{
//    QTime timer(0, 0, 0, msecs);
//    QSignalSpy spy(m_socket, &QNetworkAccessManager::finished);
//    timer.start();
//    while (spy.isEmpty() && timer.elapsed() < msecs) {
//        QCoreApplication::processEvents();
//    }
//    return !spy.isEmpty();
    return true;
}

void JsonRpcHttpSocket::disconnectFromHost()
{
    //m_socket->close();
    m_socket->clearAccessCache();
}

bool JsonRpcHttpSocket::isConnected() const
{
    //return m_socket->state() == QAbstractSocket::ConnectedState;
    return true;
}

void JsonRpcHttpSocket::send(const QByteArray& data)
{
    //m_socket->sendTextMessage(data);
}

QString JsonRpcHttpSocket::errorString() const
{
    //return m_socket->errorString();
    return  "";
}

QHostAddress JsonRpcHttpSocket::localAddress() const
{
    //return m_socket->localAddress();
    return QHostAddress(QHostAddress::LocalHost);
}

int JsonRpcHttpSocket::localPort() const
{
    //return m_socket->localPort();
    return 0;
}

QHostAddress JsonRpcHttpSocket::peerAddress() const
{
    //return m_socket->peerAddress();
    return QHostAddress(QHostAddress::LocalHost);
}

int JsonRpcHttpSocket::peerPort() const
{
    //return m_socket->peerPort();
    return 0;
}

void JsonRpcHttpSocket::dataReady(QNetworkReply * reply)
{
    //emit dataReceived(data.toUtf8(), m_socket);
    reply->deleteLater();
}
void JsonRpcHttpSocket::sslErrors(QNetworkReply * reply, const QList<QSslError> & errors)
{

}
}
