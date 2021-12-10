#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 //coding for the outer circle
 setcolor(RED);
 circle(300,300,100);
 setfillstyle(SLASH_FILL,BLUE);
 floodfill(301,299,RED);

 //Coding for the inner circle
 setcolor(RED);
 circle(300,300,60);
 setfillstyle(SOLID_FILL,0);
 floodfill(301,299,RED);
 circle(300,300,1);

 //coding for the lines of the wheel
 line(300,300,300,360);
 line(300,300,300,240);
 line(300,300,343,343);
 line(300,300,258,258);
 line(300,300,360,300);
 line(300,300,240,300);
 line(300,300,343,257);
 line(300,300,257,343);

 getch();
 closegraph();
}