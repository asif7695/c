#include<stdio.h>
struct person {
    char name[50];
    int age;
    float salary;
};

int main(){
int i;
struct person per1[2];

for(i = 0 ; i <= 3 ; i++ ){
    printf("person %d name : ",i+1);
    gets(per1[i].name);
    printf("person %d age : ",i+1);
    scanf("%d",&per1[i].age);
    printf("person %d salary : ",i+1);
    scanf("%f",&per1[i].salary);
}
printf("\n\n\n");

for(i = 0 ; i <= 3 ; i++ ){
    printf("person %d\n",i+1);
    printf("name : %s\n",per1[i].name);
    printf("age : %d\n",per1[i].age);
    printf("salary : %.2f\n",per1[i].salary);
    
}

return 0;
}
