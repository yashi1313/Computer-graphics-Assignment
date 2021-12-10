#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

 //right part
 ellipse(350,200,90,190,110,150);
 ellipse(350,200,90,190,110,140);
 ellipse(350,200,55,90,115,150);
 ellipse(350,200,60,90,132,140);
 ellipse(350,92,270,320,40,20);
 ellipse(350,92,270,330,35,25);
 ellipse(330,150,70,180,60,40);
 ellipse(330,150,70,180,60,35);
 ellipse(302,120,240,360,60,40);
 circle(310,140,20);

 //left part
 ellipse(100,200,350,90,110,150);
 ellipse(100,200,350,90,110,140);
 ellipse(100,200,90,125,115,150);
 ellipse(100,200,90,120,132,140);
 ellipse(120,150,360,110,60,40);
 ellipse(120,150,360,110,60,35);
 ellipse(100,92,220,270,40,20);
 ellipse(100,92,210,270,35,25);
 ellipse(148,120,180,300,60,40);
 circle(140,140,20);

 //bindi
 setcolor(RED);
 circle(225,100,5);
 setfillstyle(SOLID_FILL,RED);
 floodfill(226,99,RED);

 //nose
 setcolor(15);
 ellipse(205,230,100,280,15,10); //left
 ellipse(245,230,270,70,15,10);//right
 ellipse(225,235,200,340,20,15);//middle

 //nose piercing
 setcolor(YELLOW);
 ellipse(275,230,200,180,30,30);
 circle(305,210,5);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(306,209,YELLOW);

 //lips
 setcolor(RED);
 ellipse(200,300,50,140,30,30);
 ellipse(240,300,40,130,30,30);
 ellipse(220,250,232,310,70,40);
 ellipse(220,252,220,320,40,55);

 getch();
 closegraph();
}