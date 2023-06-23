#include<stdio.h>
int main()
{
    float income,tax,totaltax;
    printf("enter val of income:");
    scanf("%f",&income);
    if(income<=2500)
    {
        tax=0;
        printf("\nslab tax 1=%f",tax);
    }
    else if(2500<=income&&income<=5000)
    {
        tax=(income-2500)*0.10;
        printf("\nslab tax2=%f",tax);
    }
     else if(5000<income&&income<=10000)
    {
        tax=500+(income-5000)*0.20;
        printf("\nslab tax3=%f",tax);
    }
     else 
    {
        tax=500+1000+(income-10000)*0.30;
        printf("\nslab tax4=%f",tax);
    }
    totaltax=income-tax;
    printf("\ntotaltax=%f",totaltax);
}