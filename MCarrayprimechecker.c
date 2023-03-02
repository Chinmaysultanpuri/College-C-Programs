#include<stdio.h>

void RA();
void DA();
void PA();

int n;
int x[50];


main()
{
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    if(n>=1 && n<=50)
    {
        RA();
        DA();
        PA();
    }
    else
    {
        printf("Max you can enter 50 elements.");
    }
}

void RA()
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter a %dth element : \n", i);
        scanf("%d", &x[i]);
    }
}
void DA()
{
    printf("The elements of the array are : \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
}
void PA()
{
    int j, i, prime;
    for( i = 0; i < n; i++)
    {
        prime = 1;
        for(j = 2; j <= x[i]/2; j++)
        {
            if(x[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }
        
    }
    if(prime == 1)
    {
        printf("\nThe %dth element is prime!", i);
    }
    else if (i == n)
    {
        printf("\nNo primes.");
    }
}
