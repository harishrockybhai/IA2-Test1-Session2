#include<stdio.h>
typedef struct _triangle
{
float base , altitude, area;
}Triangle;

Triangle input_triangle()
{
  Triangle a;
  printf("enter the base and altitude :");
  scanf("%f %f",&a.base,&a.altitude);
  return a;
}
void find_area(Triangle *t)
{
  t->area=(t->base * t->altitude)/2.0;
  }
void output(Triangle t)
{
  printf("the area of triangle with base %f and altitude %f is %f",t.base,t.altitude, t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
}