#include<stdio.h>

void did(int a);

int a1, f1 = 0, f2 = 1, i = 3, f3;

main()
{
    
    printf("Enter number of iterations ; \n");
    scanf("%d", &a1);
    did(a1);
}

void did(int a)
{
    if(a == 0)
    {
        printf("%d", f1);
    }
    else if(a == 1)
    {
        printf("%d %d", f1, f2);
    }
    else
    {
        printf("%d %d ", f1, f2);
        while(i <= a)
        {
            f3 = f1+f2;
            printf("%d ", f3);
            f1 = f2;
            f2 = f3;
            i++;
        }


    }
}