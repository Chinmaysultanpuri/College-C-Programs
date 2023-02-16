#include<stdio.h>

main()
{
    int a, b;
    printf("Enter two numbers : \n");
    scanf("%d%d", &a, &b);
    if(b>a)
    {
        for(int i = a; i <= b; i++)
        {
            if(i % 7 == 0)
            {
                printf("%d \n", i);
            }
        }
    }
    else
    {
        printf("Improper Range \n");
    }
}