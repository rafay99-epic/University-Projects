#include<conio.h>
#include"graphics.h"

using namespace std;

int main()
{
int gd=DETECT,gm;

initgraph(&gd,&gm,"c:\\tc\\bgi");

outtextxy(30,50,"MAJU");

getch();

closegraph();

return 0;
}
