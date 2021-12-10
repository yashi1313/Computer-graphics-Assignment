#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

 //head
 circle(400,100,40);
 circle(410,85,5);

 //body
 ellipse(320,185,70,180,120,80);
 ellipse(260,185,180,270,60,60);
 ellipse(260,125,270,355,120,120);
 ellipse(244,105,250,355,120,100);

 //beak
 line(440,90,460,95);
 line(460,95,438,110);

 //feet1
 line(280,243,280,270);

 line(280,270,300,275);
 line(280,270,300,285);
 line(280,270,290,290);

 //feet2
 line(310,235,310,265);

 line(310,265,330,270);
 line(310,265,330,280);
 line(310,265,320,285);

 //tail
 line(200,175,90,160);
 line(90,160,110,170);
 line(110,170,200,180);
 line(110,170,100,185);
 line(100,185,110,195);
 line(110,195,200,195);
 line(110,195,95,205);
 line(95,205,200,200);
 getch();
 closegraph();
}