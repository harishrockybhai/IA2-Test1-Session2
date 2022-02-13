#include<stdio.h>
int input_side()
{
  int a; 
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b && b!=c && a!=c)
  {
    return 1;
  }
  return 0;
}
void output(int a, int b, int c, int isscalene)

{
  if(isscalene)
  {
    printf("the triangle of %d %d %d is %d is scalene",a,b,c,isscalene);
  }
  else
  {
    printf("the triangle of %d %d %d is %d is not scalene",a,b,c,isscalene);
  }
}
int main()
{
  int a,b,c,isscalene;

  printf("enter the no :");
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
}
