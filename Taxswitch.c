#include<stdio.h>
main()
{
    int p;
    printf("Enter taxable amount : \n");
    scanf("%d", &p);
    switch(p)
    {
        case 1 ... 100000: printf("Total tax = %f\n", p*0); break;
        case 100001 ... 250000: printf("Total tax = %f\n", (p-100000)*0.05); break;
        case 250001 ... 1000000: printf("Total tax = %f\n",7500 + (p-250000)*0.075); break;
        default: printf("Total Bill = %f \n", 68750 + (p-1000000)*0.1); break;
    }
}