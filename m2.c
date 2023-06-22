#include<stdio.h>
int perfact(int a)
{
   int i,n=0;
   for(i=1;i<a;i++)
   {
      if(a%i==0)
      {
         n=n+i;
         printf("%d",i);
      }
   }
      printf(" : %d",n);
      if(a==n)
      {
        printf("\n number is perfact:%d",n);
       }
       else
       {
         printf("\n number is not perfact:%d",n);
       }
}
int main()
{ 
   int a;
   printf("enter a:");
   scanf("%d",&a);
   perfact(a);
}