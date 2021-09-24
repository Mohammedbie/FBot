#ifndef USERCREDENTIALS_H
#define USERCREDENTIALS_H

#include <QObject>

class UserCredentials : public QObject
{
    Q_OBJECT
public:
    explicit UserCredentials(QObject *parent = nullptr);

signals:

};

#endif // USERCREDENTIALS_H
