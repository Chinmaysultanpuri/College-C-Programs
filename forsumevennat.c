#include<stdio.h>

main()
{
    int a, sum = 0;
    printf("Enter a number :  \n");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        if(i % 2 == 0)
        {
            sum = sum + i; // Sum = Sum + i
        }
    }
    printf("%d", sum);
}