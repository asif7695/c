#include<stdio.h>
//global structure
struct person {
    int age;
    float salary;
};

int main(){

struct person per1 , per2;
    
    per1.age = 14;
    per1.salary = 20000.50;
        
    per2.age = 32;
    per2.salary = 55600.50;

    printf("Age = %d\nsalary = %.2f\n",per1.age,per1.salary);
    printf("Age = %d\nsalary = %.2f\n",per2.age,per2.salary);

return 0;
}