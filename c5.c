#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  float p,r,t,si;
  printf("Enter the pronciple:\n");
  scanf("%f",&p);
  
  printf("enter the rate:\n");
  scanf("%f",&r);
  printf("enter period");
  scanf("%f",&t);
  si=(p*r*t)/100;
  
  printf("simple interest is:%f :\n ",si);
  return 0;
}