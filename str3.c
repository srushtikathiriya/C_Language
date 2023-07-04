#include<stdio.h>
int main()
{
    char str[50];
    int i=0,x=0,z,l;
    printf("enter the string:");
    gets(str);
    while(str[i]!=0)
    {
        i++;
    }
    l=i;
    z=i-1;
    while(x<l/2)
    {
        printf("%c%c",str[x],str[z]);
        x++;
        z--;
    }
    if(l%2!=0)
    printf("%c",str[l/2]);
}