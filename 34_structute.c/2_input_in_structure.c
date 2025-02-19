#include<stdio.h>
//global structure
struct person {
    int age;
    float salary;
};

int main(){

struct person per1 , per2;

printf("p1.age : \n");
    scanf("%d",&per1.age);
printf("p1.salary : \n");
    scanf("%f",&per1.salary);


printf("p2.age : \n");
    scanf("%d",&per2.age);
printf("p2.salary : \n");
    scanf("%f",&per2.salary);


printf("p1 \nAge = %d\nsalary = %.2f\n",per1.age,per1.salary);
printf("p2 \nAge = %d\nsalary = %.2f\n",per2.age,per2.salary);

return 0;
}
