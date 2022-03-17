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
  int count;
 for(int i=1; i<=n; i++)
   {
     if(n%i==0)
       count++;
   }
  return count;
    
}
int sum_composite_numbers(int n, int a[n])
{
  int i,sum=0;
  for( i=0; i<=n; i++)
    {
      if(is_composite(a[i])>2)
      sum=sum+a[i];
    }
  return sum;
}
void out_put(int sum)
{
  printf("%d",sum);
}
int main()
{
  int n, a[n],sum,composite;
  n=input_array_size();
  input_array(n,a);
  
  sum=sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
}