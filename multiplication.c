#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i,n,multi;
  printf("Enter a number");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    multi=n*i; 
    
    printf("%d\n",multi);
  }
  return 0;
}