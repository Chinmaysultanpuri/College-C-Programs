#include<stdio.h>

main()
{
    int a, r=1;
    printf("Enter any number \n :");
    scanf("%d", &a);
    if(a >= 1)
    {
        for(int i = 1; i <= a; i++)
        {
            r = r * i;
        }
        printf("%d", r);
    }
    else if(a == 0)
    {
        r = 1;
        printf("%d", r);

    }
    else
    {
        printf("Improper Input. \n");
    }
}