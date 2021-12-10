#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

 //code for the road
 setcolor(WHITE);
 line(10,200,700,200);
 setcolor(WHITE);
 line(10,300,700,300);

 //code for the first building
 setcolor(15);
 line(100,200,100,10);
 line(100,10,200,10);
 line(200,10,200,200);
 rectangle(110,30,130,50);
 setcolor(15);
 rectangle(150,30,170,50);
 rectangle(120,70,140,90);
 rectangle(160,70,180,90);
 rectangle(110,130,130,110);
 rectangle(150,110,170,130);
 rectangle(130,140,170,200);

 //code for the second building
 setcolor(15);
 line(250,200,250,50);
 line(250,50,350,50);
 line(350,50,350,200);

 setcolor(15);
 rectangle(260,70,280,90);
 rectangle(310,70,330,90);
 rectangle(280,110,300,130);
 rectangle(320,110,340,130);
 rectangle(290,140,320,200);

 //code for the tree
 setcolor(BROWN);
 rectangle(410,90,430,200);
 setfillstyle(SOLID_FILL,BROWN);
 floodfill(411,101,BROWN);

 setcolor(GREEN);
 circle(400,80,20);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(401,79,GREEN);
 circle(440,80,20);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(441,79,GREEN);
 circle(380,60,20);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(381,59,GREEN);
 circle(415,50,20);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(416,54,GREEN);
 circle(450,60,20);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(451,59,GREEN);
 circle(400,30,20);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(401,29,GREEN);
 circle(440,30,20);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(441,29,GREEN);

 getch();
 closegraph();
}