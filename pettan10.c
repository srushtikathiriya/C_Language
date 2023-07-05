#include<stdio.h>
void main()
{
    int x,y,sp=10;
    for(x=1;x<=4;x++)
    {
        for(y=1;y<=sp;y++)
        {
            printf(" ");
        }
        for(y=1;y<=x;y++)
        {
            printf("%c",y+64);
        }
        sp--;
        printf("\n");
    }
    for(x=3;x>=1;x--)
    {
        for(y=1;y<=sp+2;y++)
        {
            printf(" ");
        }
        for(y=1;y<=x;y++)
        {
            printf("%c",y+64);
        }
        sp++;
        printf("\n");
    }
}