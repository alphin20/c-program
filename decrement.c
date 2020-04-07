#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ int i;
  printf("Enter a number");
  scanf("%d",&i);
  do
  {
    i--;
    printf("%d\n",i);
  }
  while(i>=1);
  return 0;
}