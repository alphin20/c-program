#include <stdio.h>
#include <math.h>
int main()
{
int n,t,remainder,sum=0,digits=0; 
printf("give us ur number");
scanf("%d",&n);
while(t!=0){
remainder=t%10;
sum=sum+ pow(remainder,3);
  t= t/10;
digits++;
}
if(n==sum)
    printf("its a amstorng number\n",n);
else
    printf("not a amstrong number\n",n);
return 0;
}
