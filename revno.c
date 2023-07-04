#include<stdio.h>
int rev(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int main()
{
    int n=1345;
    rev(n);
    printf("rev no:%d",rev(n));
}