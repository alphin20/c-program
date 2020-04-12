#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{ float mark;
  printf("enter the mark of the student");
  scanf("%f",&mark);
  if(mark>=90)
  printf("Grade is A");
  
else if(mark>=80&&mark<90)
    printf("Grade is B");
    else if(mark>=70&&mark<80)
    
    printf("Grade is c");
   else  if(mark>=46&&mark<70)
    
     printf("Grade is D");
   else
       
        printf("Failed");
        
     
   
  
  
  return 0;
}