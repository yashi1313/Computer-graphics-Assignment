#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 setcolor(15);
 line(200,100,200,400);//draws white y axis
 setcolor(RED);
 line(200,400,350,400);//draws red x axis
 line(350,400,350,250);//draws red y axis
 setcolor(GREEN);
 circle(350,250,5);//draws green dot
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(351,249,GREEN);
 setcolor(15);
 line(350,400,500,400);//draws remaining white x axis

 //next two lines are used to draw the arrow of y axis
 line(200,100,210,110);
 line(200,100,190,110);

 //next two lines are used to draw the arrow of x axis
 line(500,400,490,390);
 line(500,400,490,410);

 //next lines of code are used to write all the string values of the scale
 outtextxy(150,405,"origin");
 outtextxy(200,95,"Y");
 outtextxy(505,400,"X");
 outtextxy(270,400,"x");
 outtextxy(355,320,"y");
 outtextxy(355,250,"(x,y)");
 getch();
 closegraph();
}