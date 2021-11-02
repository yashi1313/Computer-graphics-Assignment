#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 setcolor(RED);
 rectangle(20,30,300,200);
 setfillstyle(SOLID_FILL,RED);
 floodfill(21,31,RED);
 setcolor(YELLOW);
 rectangle(50,50,320,220);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(51,51,YELLOW);
 setcolor(GREEN);
 rectangle(70,70,340,240);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(71,71,GREEN);
 setcolor(BLUE);
 rectangle(90,90,360,260);
 setfillstyle(SOLID_FILL,BLUE);
 floodfill(91,91,BLUE);
 getch();
 closegraph();
}