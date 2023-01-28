#include<stdio.h>
int main()
{
    float b;
    printf("Enter the purchase amount : \n");
    scanf("%f", &b);
    if(b>=0 && b<=1000)
    {
        printf("total bill = %0.3f", b);
    }
    else if(b>=1001 && b<=5000)
    {
        printf("total bill = %0.3f", b*0.98);
    }
    else if(b>=5001 && b<=10000)
    {
        printf("total bill = %0.3f", b*0.97);
    }
    else if(b>10000)
    {
        printf("total bill = %0.3f", b*0.95);
    }
}