#include<stdio.h>
main()
{
    int p;
    printf("Enter purchasing amount : \n");
    scanf("%d", &p);
    switch(p)
    {
        case 1 ... 1000: printf("Total bill = %f\n", p); break;
        case 1001 ... 5000: printf("Total bill = %f\n", p*0.98); break;
        case 5001 ... 10000: printf("Total bill = %f\n", p*0.97); break;
        default: printf("Total Bill = %f \n", p*0.95); break;
    }
}