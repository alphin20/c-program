#include <stdio.h> 
#include <ctype.h>

int main() {
    int c=0,i;
char s[500],ch;
printf("hwz lyf?!");
scanf("%s",s);

while(s[i]!='\0')
{ch=s[i];
    if(ch>='a'&&ch<='z')
        ch=ch-32;
    else if(ch>='A'&&ch<='Z')
        ch=ch+32;
 c++;
}
printf("huhu %s",s);
return 0;
}// char *str[500];
// int l;
  //  printf("howz lyf?!");
   // scanf("%s",str);
// l=strlen(str);
 //for(int i=0;i<l;i++)
// {
     //if(str[i]>='a'&& str[i]<='z')
        // str[i]=str[i]-32;
     //else(str[i]>="A"&& str[i]<="Z");
         //str[i]=str[i]+32;
 
 //if(isalpha (str) )
    // str[i] = toupper (str[i]);
 //else(str[i]>="A"&& str[i]<="Z");
    // str[i]= tolower (str[i]);(str[i]>="A"&& str[i]<="Z");
 
 //printf("the sentence now :p %s",str);
   //  return 0;