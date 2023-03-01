#include<stdio.h>

void RA();
void DA();
void LA();

int x[50];
int n;

main()
{
    printf("Enter the number of elements : \n");
    scanf("%d", &n);
    if(n>=1 && n<= 50)
    {
        RA();
        DA();
        LA();
    }
    else
    {
        printf("Max you can enter 50 \n");
    }
}

void RA()
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter %dth value \n", i);
        scanf("%d", &x[i]);
    }
}

void DA()
{
    printf("The elements of Array are : \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
}

void LA()
{
    int k, kb = 0;
    printf("\nEnter the search element : \n");
    scanf("%d", &k);
    for(int i = 0; i < n; i++)
    {
        if(k == x[i])
        {
            kb++;
        }
    }
    printf("Total number of %d in the Array : %d \n", k, kb);
}
