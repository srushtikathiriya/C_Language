#include<stdio.h>
int main()
{
    int i,j,x=4;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",x);
            x--;
        }
        x=4;
        printf("\n");
    }
    for(i=3;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",x);
            x--;
        }
        x=4;
        printf("\n");
    }
}