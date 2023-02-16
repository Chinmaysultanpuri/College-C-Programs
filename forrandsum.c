#include<stdio.h>

main()
{
    int a, s = 0, h;
    printf("Enter number of iterations : \n");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        printf("Enter number %d \n", i);
        scanf("%d", &h);
        s = h + s;
    }
    printf("Sum = %d \n", s);
}