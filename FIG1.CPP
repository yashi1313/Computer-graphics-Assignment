#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 setcolor(15);
 rectangle(100,100,400,400);
 setfillstyle(SOLID_FILL,15);
 floodfill(101,101,15);

 setcolor(RED);
 circle(250,250,50);
 setfillstyle(SOLID_FILL,RED);
 floodfill(251,249,RED);

 getch();
 closegraph();
}