#include<stdio.h>

float HESCOMBD(char x, int z);

main()
{
    int z;
    char x;
    printf("Enter area: \n U - Urban \n R - Rural \n");
    scanf("%c", &x);
    printf("Enter units consumed : \n");
    scanf("%d", &z);
    printf("Final Bill : %f \n", HESCOMBD(x, z));
}

float HESCOMBD(char x, int z)
{
    if(x == 'U' || x== 'u' )
    {
        switch(z)
        {
            case 0 ... 100 : return z; break;
            case 101 ... 200 : return (100+ (z-100)*1.5); break;
            case 201 ... 450 : return (100+150+(z-200)*2 ); break;
            default: return (100+150+500+(z-450)*2.5); break;
        }
    }

    else if(x == 'R' || x == 'r')
    {
        switch(z)
        {
            case 0 ... 100 : return z*0.5; break;
            case 101 ... 200 : return (100*0.5+ (z-100)*1.5); break;
            case 201 ... 450 : return (100*0.5+150+(z-200)*2 ); break;
            default: return (100*0.5+150+500+(z-450)*2.5); break;
        }
    }

}
