#include<stdio.h>
int main()
{
    char str1[50],str2[50],str;
    int i,s,x=0;
    printf("enter the str:");
    gets(str1);
    while(str1[x]!=0)
        x++;
    s=x-1;
    for(i=0;i<x;i++)
    {
        str2[i]=str1[s];
        s--;
    }
    str2[i]='\0';
    printf("%s\n",str2);
}