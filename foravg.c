#include<stdio.h>

main()
{
    int s=0, h, n;
    printf("enter number of students : \n");
    scanf("%d", &n);
    for(int i = 1; i <=n; i++)
    {
        printf("Enter marks of student %d \n", i);
        scanf("%d", &h);
        s = s + h;
    }
    printf("Avg = %f",(float) s/n);
}