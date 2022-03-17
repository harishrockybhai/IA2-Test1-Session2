#include<stdio.h>
typedef struct _triangle
{
float base,altitude,area;
}Triangle;
int input_n()
{
  int a; 
  printf("enter the no :");
  scanf("%d",&a);
  return a;
}
Triangle input_triangle()
{
  Triangle n;
  printf("enter the base and altitude :");
  scanf("%f %f",&n.base,&n.altitude);
  return n;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0; i<n; i++)
    
      t[i] = input_triangle();   
}
void find_area(Triangle *t)
{
  t->area=t->base*t->altitude/2.0;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0; i<n; i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle s=t[0];
  for(int i=1; i<n; i++)
    {
      s=s.area<t[i].area?s:t[i];
    }
  return s;
}
void output(int n, Triangle t[n], Triangle smallest)
{

  for(int i=0; i<n; i++)
    {
      printf("%0.2f,%0.2f",t[i].base,t[i].altitude);
    }
  printf("is the triangle with base %.2f and altitude %.2f ",smallest .base, smallest.altitude);
  printf("the area of triangle with base %.2f and height %.2f is %.2f",smallest.base,smallest.altitude,smallest.area);

  
}
int main()
{
  int n=input_n();
  Triangle t[n],smallest;
  input_n_triangles(n,t);
  find_areas_n(n,t);
  smallest = find_smallest_triangle(n,t);
  output(n,t,smallest);
  
}

