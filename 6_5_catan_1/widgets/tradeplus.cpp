#include "tradeplus.h"

TradePlus::TradePlus(bool is, int nn, int xx, int yy,QWidget *parent): QPushButton(parent),
    is_give{is}, n{nn}, x{xx}, y{yy}
{
    setIcon(QIcon(QPixmap(":/player_related/assets/player_related/icon_plus.png")));
    setIconSize(QSize(20,20));
    move(x,y);
}



