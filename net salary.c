#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ float netsal,da,ta,i;
  printf("Enter the salary");
  scanf("%f",&i);
  da=(10.0/100)*i;
  ta=(12.0/100)*i;
  
  netsal=da+ta+i;
  printf("Net salary is \n %f",netsal);
  
  return 0;
}