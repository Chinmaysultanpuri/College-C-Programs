#include<stdio.h>
main()
{
    int p;
    printf("Enter units consumed : \n");
    scanf("%d", &p);
    if(p>=1)
    {
        switch(p)
        {
            case 1 ... 100: printf("Total bill = %f\n", p*1.0); break;

            case 101 ... 200: printf("Total bill = %f\n", 100 + (p-100)*1.5); break;

            case 201 ... 450: printf("Total bill = %f\n", 250 + (p-200) * 2.0); break;

            default: printf("Total Bill = %f \n", 750 + (p-450)* 2.5); break;
        }
    }
    else
    {
        printf("Invalid Input. \n");
    }
}