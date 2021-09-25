#include "testuser.h"
#include "Logic/user.h"

QTEST_MAIN(TestUser)

TestUser::TestUser(QObject *parent) : QObject(parent)
{

}

void TestUser::getPost()
{
    QUuid id1 = QUuid::createUuid();
    Post post1(id1,"Mohammed","Link");
    QUuid id2 = QUuid::createUuid();
    Post post2(id2,"Mohammed","Link");
    QVector<Post> posts;
    posts.append(post1);
    posts.append(post2);

    User user("Mohammed",posts);

    QVERIFY(user.getPost(id1)!=nullptr);
    QVERIFY(user.getPost(id2)!=nullptr);
    QVERIFY(user.getPost(QUuid::createUuid())==nullptr);
}
