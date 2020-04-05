#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int age;
  printf("what is the age of the person?!\n:");
  scanf("%d",&age);
 

  if(age>=50)
  {
    if (age>=60)
  printf("pension amt is 10000");
  else
  printf("pension amt is 5000");
  }
  else 
  printf("no pension");
  
  return 0;
}