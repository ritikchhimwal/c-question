//WAP to implement Basic Pixel

#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){
  int gd = DETECT,gm;
  initgraph(&gd,&gm,"");
  putpixel(100,100,RED);
  getch();
  closegraph();
}
