#include<stdio.h>

main()
{
    int n, OS = 0, ES = 0;
    printf("Enter any two numbers \n : ");
    scanf("%d", &n);
    if(n >= 1)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                ES += i;
            }
            if((i+1) % 2 == 0)
            {
                OS += i;
            }
        }
        printf("Even -- %d \n Odd -- %d \n", ES, OS);
    }
    else
    {
        printf("Improper Input. ");
    }
}