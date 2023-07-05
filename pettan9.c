#include<stdio.h>
void main()
{
    int x,y;
    char z=65;
    for(x=1;x<=4;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("%c\t",z-y+1);
        }
        z++;
        printf("\n");
    }
    z=65;
    for(x=3;x>=1;x--)
    {
        for(y=x;y>=1;y--)
        {
            printf("%c\t",z+y-1);
        }
        printf("\n");
    }
}