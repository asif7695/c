#include<stdio.h>

int main() {

//summation

int num1,num2,sum,avg,red,mul;
printf("Enter num1 : ");
scanf("%d",&num1);
printf("Enter num2 : ");
scanf("%d",&num2);
sum=num1+num2;
printf("The summation of num1 and num2 : %d \n",sum);
avg=(num1+num2)/2;
printf("The average of num1 and num2 : %d \n",avg);
red=num1-num2;
printf("The reduction of num1 and num2 : %d \n",red);
mul=num1*num2;
printf("The multiplication of num1 and num2 : %d \n",mul);


return 0;
}