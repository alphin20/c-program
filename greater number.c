#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{int num1,num2,num3;
  printf("enter a number!");
 scanf("%d",&num1);scanf("%d",&num2); scanf("%d",&num3);
  if(num1>num2)
  {
    if(num1>num3)
    printf("%d is the highest",num1);
    else  
    printf("%d is the highest",num3);
  }
  if(num2>num1)
  {
    if(num2>num3)
    printf("%d is the highest",num2);
    else  
    printf("%d is the highest",num3);
  }
  return 0; 
}