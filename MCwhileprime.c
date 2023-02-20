#include<stdio.h>

void MC(int n);


main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    MC(a);
}

void MC(int n)
{
    while(n!=0)
    {
        int d = n % 10;
        n = n / 10;
        if(d == 2 || d == 3 ||d == 5 ||d == 7)
        {
            printf("%d ", d);
        }
    }
}