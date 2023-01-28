#include<stdio.h>
main()
{
    int a;
    printf("Enter a number : \n");
    scanf("%d", &a);
    switch(a%2)
    {
        case 0 : printf("Even"); break;
        default: printf("Odd"); break;
    }

}