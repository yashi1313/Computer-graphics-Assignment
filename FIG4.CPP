#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 setcolor(15);
 rectangle(40,70,400,400);
 setfillstyle(SOLID_FILL,15);
 floodfill(101,101,15);

 setcolor(BLUE);
 line(200,180,70,300);
 line(200,180,350,300);
 line(70,300,349,300);
 setfillstyle(SOLID_FILL,BLUE);
 floodfill(180,200,BLUE);

 setcolor(5);
 rectangle(250,210,350,300);
 setfillstyle(SOLID_FILL,5);
 floodfill(251,211,5);

 setcolor(YELLOW);
 circle(250,300,44);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(251,299,YELLOW);


 getch();
 closegraph();
}