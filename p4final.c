#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the array size :");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n])
{
  for(int i=0; i<n; i++)
  {
    printf("enter the array no :");
    scanf("%d",&a[i]);
  }
}
int is_composite(int n)
{
  int i;
  for(i=2; i<=n/2; i++)
  {
    if(n%i==0)
    {
      return 1;
    }
  }
  return 0;
}
int sum_composite_numbers(int n, int a[n])
{
 int i,sum=0;
 for(int i=0; i<n; i++)

 {
   if(is_composite (a[i]))
   {
    sum=sum+a[i];
   }
 
 }
 return sum;
}
void out_put(int sum)
{
  printf("%d",sum);
}
int main()
{
  int n, a[n],sum,res;
  n=input_array_size();
  input_array(n,a);
  res=is_composite(n);
  sum=sum_composite_numbers(n,a);
  out_put(sum);
  
}