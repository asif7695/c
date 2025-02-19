#include<stdio.h>
//global structure
struct person {
    int age;
    float salary;
};

int main(){

struct person per1 = {20,20000.20}, per2 = {10,1000.10};
//we can also initialize structure like this

struct person per3 = per1;
// we can also copy a structure to another structure like this

printf("p1 \nAge = %d\nsalary = %.2f\n",per1.age,per1.salary);
printf("p2 \nAge = %d\nsalary = %.2f\n",per2.age,per2.salary);
printf("p3 \nAge = %d\nsalary = %.2f\n",per3.age,per3.salary);

return 0;
}
