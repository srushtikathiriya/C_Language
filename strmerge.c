#include<stdio.h>
int main()
{
    char str1[30],str2[40],z=0,x=0;
    printf("enter the first word:");
    gets(str1);
    printf("enter the second word:");
    gets(str2);
    while(str1[z]!=0)
    {
        z++;
    }
    while(str2[x]!=0)
    {
        str1[z++]=str2[x];
        x++;
    }
    str1[z]='\0';
    printf("\n%s",str1);
}