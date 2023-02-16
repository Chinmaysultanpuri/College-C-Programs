#include<stdio.h>

int f1=0,f2=1,f3;

int main()
{
        int n;
        void display(int);
        printf("Enter the number ");
        scanf("%d",&n);
        display(n);
        return 0;
}

void display(int a)
{
        if (a==1)
        {
            printf("%d",f1);
        }
        else if (a==2)
        {
            printf("%d%d",f1,f2);
        }
        else 
        {
                printf("%d %d",f1,f2);
                for (int i=3;i<=a;i++)
                {
                        f3=f1+f2;
                        printf(" %d ",f3);
                        f1=f2;
                        f2=f3;
                }       
        }

}
