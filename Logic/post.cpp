#include "post.h"

Post::Post(QUuid id, QString userName, QString link)
{
    m_Id = id;
    m_UserName = userName;
    m_Link = link;
}

const QUuid& Post::getId() const
{
    return m_Id;
}

const QString& Post::getUserName() const
{
    return m_UserName;
}

const QString& Post::getLink() const
{
    return m_Link;
}
