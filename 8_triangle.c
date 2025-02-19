#include<stdio.h>

int main(){
float hight,base,area;

printf("Enter the hight of the triangle : ");
scanf("%f",&hight);
printf("Enter the base of the triangle : ");
scanf("%f",&base);
area=.5*base*hight;
printf("The area of the triangle is : %.2f",area);


return 0;
}