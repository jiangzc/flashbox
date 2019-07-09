#ifndef MYFAVORITE_H
#define MYFAVORITE_H
#include <QDir>
#include <QFile>
#include <QTextStream>
#include "game.h"
#include <QSet>

class MyFavorite
{
public:
    //MyFavorite(); // MyFavorite is a special gameType
    int gameType;
    QSet<QString> Items;
    void loads(int gameTypes);
    void addLikes(GameInfo info);
    void removeLikes(GameInfo info);
    bool isLiked(QString info);

};
extern MyFavorite myFavorite;
#endif // MYFAVORITE_H