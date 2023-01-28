#include<stdio.h>
int main()
{
    float u;
    printf("Enter the units consumed : \n");
    scanf("%f", &u);
    if(u>=0 && u<=100)
    {
        printf("Total bill = Rs.%0.2f", u);
    }
    else if(u>=100 && u<=200)
    {
        printf("Total bill = Rs.%0.2f", u*1.5);
    }
    else if(u>=201 && u<=450)
    {
        printf("Total bill = Rs.%0.2f", u*2);
    }
    else
    {
        printf("Total bill = Rs.%0.2f", u*2.5);
    }
}