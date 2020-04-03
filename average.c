#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ 
  char name [20]; float chem,phy,maths,sum,avg;
  
  printf("Name of the student:\n");
  fgets(name,20,stdin);
  printf("Marks obtained:\n");
  printf("phy:\n");
  scanf("%f",&phy);
  printf("chem:\n");
  scanf("%f",&chem);
  printf("maths:\n");
  scanf("%f",&maths);
  sum=phy+maths+chem;
  avg=sum/3;
  printf("average of marks is%f",avg);
  return 0;
}