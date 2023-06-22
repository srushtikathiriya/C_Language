#include<stdio.h>
 int main()
{
  int a[5][5],i,j,n=0,n1=0,n2=0;
  for(i=0;i<3;i++)
   { 
    for(j=0;j<3;j++)
     {
      printf("enter val a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
     }
  }
   for(i=0;i<3;i++)
   { 
    for(j=0;j<3;j++)
     {
      printf("%d",a[i][j]);
      if(i==j)
       {
           n=n+a[i][j];
        }
      else if(i<j)
     {
       n1=n1+a[i][j];
     }
     else
     {
       n2=n2+a[i][j];
     }
  }
    printf("\n");
}
printf("\n");
printf("diagonal element total: %d\n",n);
printf("upper triangle total:%d\n",n1);
printf("loewr triangle total:%d\n",n2);
}
