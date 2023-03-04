#include<stdio.h>

int did(int a);

int a, f1 = 0, f2 = 1, f3, s = 1, i = 3;

main()
{
    printf("Enter number of iterations : \n");
    scanf("%d", &a);
    printf("%d", did(a));
}

int did(int a)
{
    if(a == 1)
    {
        return(1);
    }
    else if(a == 2)
    {
        return(2);
       
    }
    else
    {
        while( i <= a)
        {
            f3 = f2 + f1;
            s = s + f3;
            f1 = f2;
            f2 = f3;
            
            i++;
            
        }
        return(s);

    }
}
