#include<stdio.h>
int input()
{
  int a;
  printf("enter the no :");
  scanf("%d",&a);
  return a;
}
int gcd(int a, int b)
{ 
  int gcd;
  for(int i=1; i<=a && i<=b; i++)
    {
      if(a%i==0 && b%i==0)
        gcd = i;
    }
  return gcd;
  
}
void output(int a, int b, int gcd)
{
  printf("gcd of %d and %d is %d",a,b,gcd);
}
int main()
{
  int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  output(a,b,g);
}
