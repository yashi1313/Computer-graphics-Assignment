#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm;
int x=100,y=200;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
for(int i=10;i<200;i++)
{
circle(x,y,30);
x=x+i;
delay(100);
cleardevice();
}
getch();
closegraph();
}

