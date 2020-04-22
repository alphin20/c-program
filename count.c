#include <stdio.h>
int main()
{char s[900],ch;
 int i=0,chara=0,digi=0,special=0;
    printf("enter ur sentence");
    scanf("%s",s);
    while(s[i]!='\0')
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&& s[i]<='Z'))
            chara++;
     else if(s[i]>='0'&&s[i]<='9')
         digi++;
     else 
         special++;
     i++;
    }
    printf("characters:%d",chara);
    printf("didgits:%d",digi);
    printf("special:%d",special);
        return 0;
}