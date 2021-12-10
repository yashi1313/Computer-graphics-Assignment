#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 setcolor(15);
 rectangle(20,90,200,300);
 setfillstyle(SOLID_FILL,15);
 floodfill(21,91,15);

 setcolor(0);
 circle(110,200,50);
 setfillstyle(SOLID_FILL,0);
 floodfill(111,192,0);

 setcolor(YELLOW);
 circle(110,200,46);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(111,199,YELLOW);

 setcolor(0);
 ellipse(90,188,0,360,6,10);
 setfillstyle(SOLID_FILL,0);
 floodfill(91,187,0);
 setcolor(0);
 ellipse(130,188,0,360,6,10);
 setfillstyle(SOLID_FILL,0);
 floodfill(131,187,0);

 setcolor(0);
 rectangle(88,220,133,225);
 setfillstyle(SOLID_FILL,0);
 floodfill(89,221,0);

 getch();
 closegraph();
}