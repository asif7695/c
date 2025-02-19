#include<stdio.h>

double triangle( int b , int h){
    return 0.5 * b * h;
}

int main(){

int num1,num2;

printf("Enter base and hight to get the area of triangle : ");
scanf("%d %d",&num1,&num2);

printf("area of triangle = %.2lf unit",triangle(num1,num2));


return 0;
}