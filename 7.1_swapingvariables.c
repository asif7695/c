#include<stdio.h>

int main (){

printf("With Temp\n");
int num1,num2,temp;
num1=10;
num2=20;

temp=num1;  //temp=10
num1=num2;  //num1=20
num2=temp;  //num2=10

printf("num1 : %d\n",num1);
printf("num2 : %d",num2);

printf("\n\n\nWithout Temp\n");
int num3,num4;
num3=10;
num4=20;
num3=num3-num4;
num4=num3+num4;
num3=num4-num3;
printf("num3 : %d\n",num3);
printf("num4 : %d",num4);





return 0;
}