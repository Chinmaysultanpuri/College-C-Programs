#include<stdio.h>
main()
{
    float S(char a, int b);
    char C;
    float P, K;
    printf("Enter the Item : \n");
    printf("B - Books. \n");
    printf("P - Pendrive. \n");
    scanf("%c", &C);
    printf("Enter the price : ");
    scanf("%f", &P);
    K = S(C, P);
    printf("Final bill after discount %f: ", K);    
}
float S(char C, int P)
{
    if( C == 'B'|| C == 'b')
    {
        switch (P)
        {
            case 1 ... 2000: return P; break;
            case 2001 ... 5000: return (P*0.95); break;
            default: return(P*0.93);
        } 
    }
    else
    {
        switch (P)
        {
            case 1 ... 500: return (P*0.98); break;
            case 501 ... 2000: return (P*0.96); break;
            default: return(P*0.94);
        }
    }
}