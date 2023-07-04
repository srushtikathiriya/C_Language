#include<stdio.h>
int add()
{
    int a,b,t;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    t=a+b;
    return t;
}
int main()
{
    int x;
    printf("hello.....\n");
    x=add();
    printf("addition:%d\n",x);
    printf("\nhiiii.....");
}