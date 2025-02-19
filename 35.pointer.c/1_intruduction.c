#include<stdio.h>
// pointer shows the address of another variable

int main(){
int a=10;
int *ptr;

ptr = &a;

printf("a = %d\n",a);
printf("address a = %d\n",&a);  // here and is to print address
printf("ptr = %d\n",ptr);  // address of a
printf("*ptr = %d\n",*ptr); // value of a
printf("&ptr = %d\n",&ptr); //address of pointer

return 0;
}