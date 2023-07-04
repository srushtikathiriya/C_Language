#include<stdio.h>
int main()
{
    char str[50];
    printf("enter string:");
    //scanf("%s",&str);
    //scanf("%[^\n]s",&str);
    gets(str);
    //puts(str);
    printf("\nyour string is:%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("\nlenth is:%d",i);
}