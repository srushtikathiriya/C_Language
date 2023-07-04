#include<stdio.h>
int perfact(int a)
{
   int i,z[]={2000,500,200,100,50,20,10,5,2,1}
,n=0;
   for(i=0;i<9;i++)
   {
      n=a/z[i];
      if(n!=0)
      {
         printf("\n%d notes is:%d",z[i],n);
         a=a%z[i];
      }
   }
}
int main()
{
   int n;
   printf("enter amount:");
   scanf("%d",&n);
   perfact(n);
}