#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{int num;
  printf("enter a number!");
  scanf("%d",&num);  
 if(num>0)  
 printf("number is positive");
 else if(num<0)
 printf("num is neg");
 else if(num==0)
 printf(" numberis 0");
  
return 0;
}