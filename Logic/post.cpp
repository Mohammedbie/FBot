#include "post.h"

Post::Post(QUuid id, QString userName, QString link)
{
    m_Id = id;
    m_UserName = userName;
    m_Link = link;
}

Post::Post(const Post &otherPost)
{
    m_Id = otherPost.m_Id;
    m_UserName = otherPost.m_UserName;
    m_Link = otherPost.m_Link;
}

Post& Post::operator=(const Post &otherPost)
{
    m_Id = otherPost.m_Id;
    m_UserName = otherPost.m_UserName;
    m_Link = otherPost.m_Link;
    return *this;
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
