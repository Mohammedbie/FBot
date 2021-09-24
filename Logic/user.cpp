#include "user.h"

User::User(QString name, QVector<Post> posts)
{
    m_Name = name;
    m_Posts = posts;
}

const QString &User::getName() const
{
    return m_Name;
}

const QVector<Post> &User::getPosts() const
{
    return m_Posts;
}

std::shared_ptr<Post> User::getPost(QUuid id) const
{
    for(unsigned i=0;i<m_Posts.length();++i)
    {
        if(m_Posts[i].getId()==id)
            return std::make_shared<Post>(m_Posts[i]);
    }
    return nullptr;
}
