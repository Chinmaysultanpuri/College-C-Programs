#include<stdio.h>
main()
{
    int a, b;
    int sum(int a, int b);
    printf("Enter any two numbers : \n");
    scanf("%d%d", &a, &b);
    a = sum(a, b);
    printf("Sum = %d", a);
}

int sum(int a, int b)
{
    return(a+b);
}