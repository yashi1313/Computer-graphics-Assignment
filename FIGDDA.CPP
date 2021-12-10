#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void DDA(int x1,int y1,int x2, int y2)
{
 int steps,x_inc,y_inc,i;
 int dx=(float)x2-x1;
 int dy=(float)y2-y1;

 if(dx>dy)
 {
 steps=dx;
 }
 else
 steps=dy;
 x_inc=dx/steps;
 y_inc=dy/steps;
 int x=x1;
 int y=y1;


 for(i=1;i<steps;i++)
 {
  x=x+x_inc;
  y=y+y_inc;
  putpixel(x,y,15);
  }
 }
 void main()
 {
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 DDA(100,100,200,300);
 DDA(50,50,100,100);
 getch();
 closegraph();
 }