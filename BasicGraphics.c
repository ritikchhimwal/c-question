//Write a program to draw basic graphics construction like line,circle,arc,ellipse and reactangle

#include<stdio.h>
#include<graphics.h>

int main(){
  int gd = DETECT,gm;
  int x,y,radius,width,height;
  initgraph(&gd,&gm,"");

  //DrawLine
  printf("Line");
  x = 50;
  y = 100;
  line(x,y,x+100,y);

  //DrawCircle
  printf("Circle");
  x=200;
  y=150;
  circle(x,y,radius);

  //Draw arc
  printf("ARC");
  x=350;
  y=100;
  radius=40;
  arc(x,y,0,270,radius);

  //Draw Ellipse
  printf("Ellipse");
  x=500;
  y=180;
  width=80;
  height=50;
  ellipse(x,y,0,360,widyh,height);

  //Draw rectangle
  printf("Rectangle")
  x=650;
  y=120;
  width = 100;
  height=70;
  rectangle(x,y,x+width,y+height);
  getch();
  closegraph();
  
}
