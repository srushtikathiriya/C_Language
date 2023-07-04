#include<stdio.h>
int add(int x,int y)
{
   printf("product is:%d",x*y);
}
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    add(a,b);   
}