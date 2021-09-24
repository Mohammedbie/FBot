#ifndef USER_H
#define USER_H

#include <QObject>
#include <QString>
#include <QVector>

#include <memory>

#include "post.h"


class User : public QObject
{
    Q_OBJECT
public:
    explicit User(QString name, QVector<Post> posts);

    const QString& getName() const;
    const QVector<Post>& getPosts() const;
    std::shared_ptr<Post> getPost(QUuid id) const;

signals:

private:
    QString m_Name;
    QVector<Post> m_Posts;
};

#endif // USER_H
