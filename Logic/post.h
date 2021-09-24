#ifndef POST_H
#define POST_H

#include <QObject>
#include <QUuid>
#include <QString>

class Post : public QObject
{
    Q_OBJECT
public:
    explicit Post(QUuid id, QString userName, QString link);

    const QUuid& getId() const;
    const QString& getUserName() const;
    const QString& getLink() const;

signals:

private:
    QUuid m_Id;
    QString m_UserName;
    QString m_Link;
};

#endif // POST_H
