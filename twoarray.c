#include<stdio.h>
int main()
{
    int a[5],b[5],sum[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("enter b[%d]:",i);
        scanf("%d",&b[i]);
    }
    printf("a\tb\tsum\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t%d\t%d\n",a[i],b[i],sum[i]);
    }
}