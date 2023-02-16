#include<stdio.h>

main()
{
    int a, b;
    printf("Enter the limits (a,b) : \n");
    scanf("%d%d", &a, &b);
    if(b>a)
    {
        for(int i = a; i <= b; i++)
            if(i>=1)
                {
                    printf("%d \n", i);
                }
    }
    else
    {
        printf("Improper Range \n");
    }
}