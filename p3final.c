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
  for(int i=2; i<=n/2; i++)
  {
    return 1;
  }
  return 0;
}
void output(int n, int composite)
{
  printf("%d is a composite no ",composite);
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
}
