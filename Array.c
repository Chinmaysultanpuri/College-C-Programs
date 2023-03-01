#include<stdio.h>

int x[50];

void RA(int n);
void DA(int n);
void SOA(int n);


main()
{
    int n;
    printf("Enter number of elements of the array : \n");
    scanf("%d", &n);
    if(n>=1 && n<=50)
    {
        RA(n);
        DA(n);
        SOA(n);    
    }
    else
    {
        printf("Max you can enter 50 elemnts");
    }
}

void RA(int n)
{
    for(int i = 0; i < n; i ++)
    {
        printf("Enter %dth Element \n", i);
        scanf("%d", &x[i]);
    }
}

void DA(int n)
{
    printf("Elements of Array : \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
}

void SOA(int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        s = s + x[i];
    }
    printf("\n Sum : %d", s);
}