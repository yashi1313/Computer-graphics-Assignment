#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
for(i=10;i<420;i=i+10)
{
//outer body
setcolor(RED);
line(100+i,300,100+i,250);
line(100+i,250,155+i,250);
line(155+i,250,210+i,180);
line(210+i,180,370+i,180);
line(370+i,180,420+i,250);
line(420+i,250,475+i,250);
line(475+i,250,475+i,300);
line(100+i,300,180+i,300);
setcolor(YELLOW);
circle(210+i,300,30);
circle(210+i,300,5);
setcolor(RED);
line(240+i,300,335+i,300);
line(475+i,300,395+i,300);
setcolor(YELLOW);
circle(365+i,300,30);
circle(365+i,300,5);

//window
setcolor(WHITE);
rectangle(215+i,190,365+i,250);
setfillstyle(SOLID_FILL,BLUE);
floodfill(216+i,249,WHITE);
line(287+i,190,287+i,250);
delay(90);
cleardevice();
}
getch();
closegraph();
}