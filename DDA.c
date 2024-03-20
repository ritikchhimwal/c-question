#include<stdio.h>
void ddaline(int x1,int y1,int x2,int y2){
  int dx=x2-x1;
  int dy=y2-y1;

  int steps = dx>dy ? dx:dy;

  float xinc = (float)dx/steps;
  float yinc = (float)dy/steps;

  float x=x1;
  float y=y1;

  printf("pixel cooardinate");
  for(int i=0;i<=steps;i++){
    printf("(%0.2f,%0.2f)/n",x,y);
    x+=xinc;
    y+=yinc;
  }
}

int main(){
  int x1,y1,x2,y2;
  x1=x2=x3=x4=50;
  ddaline(x1,x2,x3,x4);
  return 0;
}
