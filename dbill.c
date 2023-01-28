#include<stdio.h>
main()
{
float num;
printf("Enter the purchasing amount : \n");
scanf("%f", &num);
if(num>10000)
{
    num = num*(0.90);
    printf("The final bill is %f", num);
}
else
{
    printf("The final bill is %0.1f", num);
}
}