#include<stdio.h>

main()
{
    int a;
    printf("Enter a number : \n ");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        printf("%d \n", 2*i);
    }
}