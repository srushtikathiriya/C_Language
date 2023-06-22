#include<stdio.h>
#define n 5
void display(int a[])
{
  for(int i=0;i<n;i++)
  {
    printf("%d",a[i]); 
  }
 }
 int max(int x[])
 {
   int b=x[0];
   for(int i=0;i<n;i++)
   {
     if(x[i]>b)
	 {
	    b=x[i];
	 }
    }
	printf("\nmaximum no is:%d",b);
 }
 int min(int x[])
 {
   int b=x[0];
   for(int i=0;i<n;i++)
   {
     if(x[i]<b)
	 {
	    b=x[i];
	 }
    }
	printf("\nminimum no is:%d",b);
 }
 int main()
 {
   int arr[n],i;
   for(i=0;i<n;i++)
   {
     printf("enter val:");
	 scanf("%d",&arr[i]);
	}
	display(arr);
	max(arr);
	min(arr);
	
 }