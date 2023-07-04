#include<stdio.h>
int add(int x,int y)
{
   return x*y;
}
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    int t=add(a,b);   
    printf("product is:%d",t);
}