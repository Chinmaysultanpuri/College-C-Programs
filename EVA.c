#include<stdio.h>

float BHD(char Z, int N);

main()
{
    char T;
    int P;
    printf("Enter the type of Car \n C - Car \n X - XUV \n E - Executive Class \n");
    scanf("%c", &T);
    printf("Enter the purchase amount : \n");
    scanf("%d", &P);
    if(P > 0)
    {
        float O = BHD(T, P);
        printf("Final Bill after discount : %f \n", O);
    }
    else
    {
        printf("Invalid input. ")
    }
}

float BHD(char Z, int N)
{
    if(Z == 'C'|| Z == 'c')
    {
        switch(N)
        {
            case 0 ... 400000 : return (N-5000); break;
            case 400001 ... 600000 : return (N-(N-400000)*0.05-5000); break;
            case 600001 ... 700000 : return (N-(N-600000)*0.07-10000); break;
            case 700001 ... 900000 : return (N-(N-700000)*0.09-20000); break;
        }
    }
    else if(Z == 'X' || Z == 'cx')
    {
        switch(N)
        {
            case 0 ... 1099999 : return N; break;
            case 1100000 ... 1500000 : return (N-30000); break;
            default : return (N-((N-1500000)*0.15)-30000); break;
        }
    }
    else if(Z == 'E' || Z == 'e')
    {
        switch(N)
        {
            case 0 ... 1499999 : return N; break;
            case 1500000 ... 3000000: return (N-500000); break;
            default : return (N-((N-3000000)*0.20)-30000); break;

        }
    }
}
