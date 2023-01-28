#include<stdio.h>
main()
{
    int m;
    printf("Enter your marks : \n");
    scanf("%d", &m);
    switch(m)
    {
        case 0 ... 39 : 
        printf("You Failed. \n");
        break;

        case 40 ... 59 : 
        printf("Second class. \n");
        break;

        case 60 ... 79 : 
        printf("First class. \n");
        break;

        case 80 ... 100 : 
        printf("Distinction  \n");
        break;

        default: 
        printf("Invalid Marks \n");
        break;

    }

}