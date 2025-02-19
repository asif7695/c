#include<stdio.h>
int main(){
int a=5,b=10,sum;
int *ptr1,*ptr2;

ptr1 = &a;
ptr2 = &b;

sum = *ptr1 + *ptr2;

printf("sum of a and b = %d\n",sum);

return 0;
}