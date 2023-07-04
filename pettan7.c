#include<stdio.h>
int main()
{
    int i,j,sp=10;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=1;j--)
        {
            if(i>=j)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        sp--;
        printf("\n");
    }
    for(i=5-1;i>=1;i--)
    {
        for(j=5;j>=1;j--)
        {
            if(i>=j)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        sp--;
        printf("\n");
    }
}