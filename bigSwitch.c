#include<stdio.h>
main(){
int p,q;

printf("enter the values ");
scanf("%d%d",&p,&q);

switch(p>q){
case  1 :
printf("n1 is greater than n2");
break;



default:
printf("n2 is greater than n1");
break;
}
}