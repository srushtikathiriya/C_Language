#include<stdio.h>
#define n 7
int display(int b[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}
int main()
{
    int arr[n],i;
    for(int i=0;i<n;i++)
    {
        printf("enter val:");
        scanf("%d",&arr[i]);
    }
    display(arr);
}