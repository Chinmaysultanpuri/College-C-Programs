#include<stdio.h>
int main()
{
int m;
printf("Enter the student's marks : \n");
scanf("%d", &m);
if (m>=0 && m<=39)
    {
        printf("Fail \n");
    }
    else if(m>=40 && m<=59)
    {
        printf("Pass \n");
    }
    else if(m>=60 && m<=79)
    {
        printf("First Class \n");
    }
    else if(m>=80 && m<=100)
    {
        printf("Distiction \n");
    }
    else
    {
        printf("Invalid Marks");
    }
    printf("\n");
}