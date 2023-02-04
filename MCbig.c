#include<stdio.h>

float p(float a, float b);

main()
{
    float a, b;
    printf("Write any two numbers \n");
    scanf("%f%f", &a, &b);
    a = p(a, b);
    printf("Biggest number : %f", a);
}

float p(float x, float y)
{
    if(x>y)
        return x;
    else
        return y;
}