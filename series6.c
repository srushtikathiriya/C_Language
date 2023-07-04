#include<stdio.h>
int main()
{
    int p=0,n,c=1,m,i;
    printf("enter the no:");
    scanf("%d",&m);
    printf("%d",c);
    for(i=1;i<m;i++)
    {
        n=p+c;
        printf("\t%d",n);
        p=c;
        c=n;
    }
    printf("\n");
}