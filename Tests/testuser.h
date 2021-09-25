#ifndef TESTUSER_H
#define TESTUSER_H

#include <QObject>
#include <QtTest/QtTest>


class TestUser : public QObject
{
    Q_OBJECT
public:
    explicit TestUser(QObject *parent = nullptr);

signals:

private slots:
    void getPost();

};

#endif // TESTUSER_H
