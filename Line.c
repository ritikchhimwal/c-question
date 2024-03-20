//WAP to implement using putpixel function making line by taking coordinate from the user or simple drawing a line

#include<stdio.h>
#include<graphics.h>

int main(){
  int gd = DETECT,gm;
  initgraph(&gd,&gm,"");
  int x1=50,y1=50;
  int x2=200,y2=200;

  float m=(float)(y2-y1)/(x2-x1);
  for(x=x1;x<=x2;x++){
    int y=y1+(int)(m*(x-x1));
    putpixel(x,y,RED);
  }
  getch();
  closegraph();
  return 0;
}

