#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include "wbconnect.h"


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    void Interface(QString host, quint16 port = 1996);//对外的界面，连接服务器使用

protected slots://建立槽
    void SetConnect();//界面建立连接
    void SendMsgToServer();//发送消息到Server
    void RecMsgFromServer(QByteArray data);//从Server接受消息,并且展现在界面上


protected:
    QLineEdit *ToSendMsg;   //发送消息
    QLineEdit *ToRecMsg;    //接收消息
    WbConnect *new_connect; //保存一个connection


};

#endif // WIDGET_H
