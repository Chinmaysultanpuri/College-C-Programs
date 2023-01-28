#include<stdio.h>
int main()
{
    int a, b, o, sm, sb, ml, dv;
    printf("Enter the any two numbers \n");
    scanf("%d%d", &a, &b);
    printf("Enter your choice: \n");
    printf("Enter 1 for Addtion : \n");
    printf("Enter 2 for Subtraction(n1>n2) : \n");
    printf("Enter 3 for Multiplication : \n");
    printf("Enter 4 for Division(n1>n2) : \n");
    scanf("%d", &o);

    if(o == 1)
    {
        sm = a+b;
        printf("Sum : %d", sm);
    }
    else if(o == 2)
    {
        sb = a-b;
        printf("Diffrence : %d", sb);
    }
    else if(o == 3)
    {
        ml = a*b;
        printf("Product : %d", ml);
    }
    else if(o == 4)
    {
        dv = a/b;
        printf("Quotient : %d", dv);
    }
    else
    {
        printf("Invalid Choice");
    }

}