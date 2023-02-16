#include<stdio.h>

main()
{
    int a, b, c=0;
    printf("Enter any two number : \n");
    scanf("%d%d", &a, &b);
    if(b>a && a>=1)
    {
            for(int i = a; i <= b; i++)
            {
                
                if((i+1) % 2 == 0)
                {
                    c += i;
                }
            }
         printf("%d", c);
    }
    else
    {
        printf("Improper Range. ");
    }
   
}