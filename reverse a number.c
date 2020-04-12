#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ int num,rev=0,rem;

  printf("enter a number");
  scanf("%d",&num);
  while(num>0){
    
  
  rem=num%10;
  rev=rev*10+rem;
  num=num/10; 
  }
  printf("the reversed numberis %d ",rev);
  
  
  
  return 0;
}