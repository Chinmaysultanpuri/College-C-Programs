#include<stdio.h>
main()
{
    int a, b;
    char ch;
    printf("Enter any two numbers : \n");
    scanf("%d%d", &a,&b);
    printf("Enter your Choice : \n");
    scanf("%c%c", &ch, &ch);
    switch(ch)
    {
        case '+': printf("Sum of two numbers : %d\n", a+b);
                break;
        case '-' : printf("Difference of two numbers : %d\n", a-b);
                break;
        case '*' : printf("Product of two numbers : %d\n", a*b);
                break;
        case '/' : printf("Quotient of two numbers : %d\n", a/b);
                break;
        default: printf("Invalid Choice.\n");
                break;
    }
}