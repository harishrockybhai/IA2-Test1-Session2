#include<stdio.h>
#include<string.h>

void input_string(char *a)
{

  printf("enter the strings :");
  scanf("%s",a);

}
void str_reverse(char *a)
{
  int c;
  int l=strlen(a);
  for(int i=0; i<l/2; i++)
    {
      c=a[i];
      a[i]=a[l-1-i];
      a[l-1-i]=c;
    }
  }
void output(char *a)
{
  printf("%s",a);
}
int main()
{
  char a[100];
  input_string(a);
  str_reverse(a);
  output(a);
  return 0;
}

