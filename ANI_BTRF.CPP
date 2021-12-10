#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
 {
  int gd=DETECT,gm,i,j=1;
  initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
  for(i=10;i<400;i=i+10)
  {
  j=j+1;
  if(j%2==0)
  {
  //body
  setcolor(BROWN);
  circle(200+i,170+10,15);
  setfillstyle(SOLID_FILL,BROWN);
  floodfill(201+i,169+10,BROWN);
  ellipse(200+i,255+10,0,360,20,70);
  setfillstyle(SLASH_FILL,BROWN);
  floodfill(201+i,249+10,BROWN);
  ellipse(225+i,155+10,90,180,20,70);
  ellipse(175+i,155+10,0,90,20,70);
  //right wing
  setcolor(YELLOW);
  ellipse(310+i,240+10,90,270,90,110);
  ellipse(220+i,130+10,270,360,90,110);
  ellipse(220+i,350+10,0,90,90,110);
  //left wing
  ellipse(90+i,240+10,270,90,90,110);
  ellipse(180+i,130+10,180,270,90,110);
  ellipse(180+i,350+10,90,180,90,110);
  }
  else
  {
  //body
  setcolor(BROWN);
  circle(200+i,170-10,15);
  setfillstyle(SOLID_FILL,BROWN);
  floodfill(201+i,169-10,BROWN);
  ellipse(200+i,255-10,0,360,20,70);
  setfillstyle(SLASH_FILL,BROWN);
  floodfill(201+i,249-10,BROWN);
  ellipse(225+i,155-10,90,180,20,70);
  ellipse(175+i,155-10,0,90,20,70);
  //right wing
  setcolor(YELLOW);
  ellipse(310+i,240-10,90,270,90,110);
  ellipse(220+i,130-10,270,360,90,110);
  ellipse(220+i,350-10,0,90,90,110);
  //left wing
  ellipse(90+i,240-10,270,90,90,110);
  ellipse(180+i,130-10,180,270,90,110);
  ellipse(180+i,350-10,90,180,90,110);
  }
  delay(200);
  cleardevice();
  }
  getch();
  closegraph();
 }