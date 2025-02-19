#include<stdio.h>
#include<string.h>

struct person{
    char name[50];
    int age;
};

void display(struct person p){
    printf("\nname : %s\n",p.name);
    printf("age : %d\n",p.age);
}

int main()
{
struct person per1,per2;
    strcpy(per1.name,"asof");
    per1.age = 20;

    strcpy(per2.name,"wpgg");
    per2.age = 345;

    display(per1);
    display(per2);
}
