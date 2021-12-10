#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

 setcolor(15);
 rectangle(100,100,400,400);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(101,101,15);
 rectangle(130,130,370,370);
 setfillstyle(SOLID_FILL,5);
 floodfill(131,131,15);

 outtextxy(245,135,"12");
 outtextxy(250,360,"6");
 outtextxy(360,245,"3");
 outtextxy(135,250,"9");

 circle(250,250,2);
 setfillstyle(SOLID_FILL,15);
 floodfill(251,249,15);

 line(250,250,250,145);
 line(250,145,240,155);
 line(250,145,260,155);

 line(250,250,330,250);
 line(330,250,320,240);
 line(330,250,320,260);

 getch();
 closegraph();
}