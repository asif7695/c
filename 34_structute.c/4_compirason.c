#include<stdio.h>
//global structure
struct person {
    int age;
    float salary;
};

int main(){

struct person per1 = {10,1000.10}, per2 = {10,1000.10};
struct person per3 = per1;

if( per1.age == per2.age && per1.salary == per2.salary){
    printf("matched\n");
}
else
    printf("not matched\n");

return 0;
}
