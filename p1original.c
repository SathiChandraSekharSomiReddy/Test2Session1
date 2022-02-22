#include<stdio.h>
#include <math.h>

void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter the points:\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}

void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void output(float x1, float y1,float x2, float y2, float area)
{
  printf("The distance between point(%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,area);
}

int main()
{
  float a,b,c,d,z;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&z);
  output(a,b,c,d,z);
  return 0;
}