#include<stdio.h>
main()
{
    int a,b;
    printf("Enter any two numbers : \n");
    scanf("%d%d", &a, &b);
    if(a==b)
    {
        printf("%d is equal to %d \n", a, b);
    }
    else
    {
        printf("%d is not equal to %d\n", a, b);
    }
}