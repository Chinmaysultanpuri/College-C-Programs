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
    if(n>=1 && n <= 50)
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
    int k;
    printf("\n Enter key :\n");
    scanf("%d", &k);
    for(int i = 0; i < n ; i++)
    {
        if(k == x[i])
        {
            printf("Key is found. \n");
            break;
        }
        else if(i == (n-1))
        {
            printf("Key not found");
        }
    }
}
