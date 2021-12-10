#include<stdio.h>
#include<conio.h>
#include<graphics.h>

 void draw(int x0,int y0,int x1,int y1)
 {
 int dx,dy,x,y,p,k;
 dx=x1-x0;
 dy=y1-y0;
 p=2*dx-dy;
 putpixel(x0,y0,3);
 for(k=0;k<dx;k++)
 {
 if(p<0)
 {
 x0=x0+1;
 p=p+2*dy;
 }
 else
 {
 x0++;
 y0++;
 p=p+2*dy-2*dx;
 }
 putpixel(x0,y0,3);
 }
 }
 void main()
 {
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 draw(20,30,100,100);
 getch();
 }