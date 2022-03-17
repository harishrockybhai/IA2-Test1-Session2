#include<stdio.h>
int input_number()
{
  int a;
  printf("enter the no :");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  int count=0;
  for(int i=1; i<=n; i++)
    {
      if(n%i==0)
        count++;
    }
  return count;
  }

void output(int n, int composite)
{
  
  if (composite>2)
  {
  printf("%d is a composite no ",n);
    }
  else
  {
    printf ("%d is a prime number ",n);
    }
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
}
