#include<stdio.h>

int main( ){

int num,i,fact=1;
printf("Enter any number to get it's factorial : ");
scanf("%d",&num);
for(i=1; i<=num ; i++)
{
    fact=fact*i;
}
printf("%d\n",fact);




return 0;
}