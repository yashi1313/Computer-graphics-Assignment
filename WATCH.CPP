#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

  setcolor(15);
  circle(300,230,80);
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(301,199,15);

  circle(300,230,70);
  setfillstyle(SOLID_FILL,5);
  floodfill(301,199,15);

  outtextxy(295,165,"12");
  outtextxy(360,225,"3");
  outtextxy(295,290,"6");
  outtextxy(235,225,"9");

  circle(300,230,2);
  setfillstyle(SOLID_FILL,15);
  floodfill(301,229,15);

 line(300,230,300,175);
 line(300,175,295,180);
 line(300,175,305,180);

 line(300,230,340,230);
 line(340,230,335,225);
 line(340,230,335,235);

 rectangle(290,140,310,150);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,141,15);
 rectangle(290,130,310,140);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,131,15);
 rectangle(290,120,310,130);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,121,15);
 rectangle(290,110,310,120);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,111,15);
 rectangle(290,100,310,110);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,101,15);

 rectangle(290,310,310,320);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,311,15);
 rectangle(290,320,310,330);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,321,15);
 rectangle(290,330,310,340);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,331,15);
 rectangle(290,340,310,350);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,341,15);
 rectangle(290,350,310,360);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(291,351,15);

 getch();
 closegraph();
}