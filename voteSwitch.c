#include<stdio.h>
main(){
int p;

printf("Enter the age of the person : \n");
scanf("%d",&p);
if(p>0)
{
    switch(p)
    {
    case  1 ... 18 :
    printf("Person is not eligible . \n");
    break;

    default:
    printf("Person is eligible to vote. \n" );
    break;
    }
}
else
{
    printf("Invalid age. \n");
}
}