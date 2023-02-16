#include<stdio.h>

main()
{
    int n, k = 0;
    printf("enter a number : \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        k += i; // k = k + i 
    }
    printf("%d", k);
}