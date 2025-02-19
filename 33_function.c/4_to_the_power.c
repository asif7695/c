#include<stdio.h>
#include<math.h>

int ttp( int a , int b){
int p;
p=a;
    for(int i=1; i<b; i++){
        p = p*a;
    }
    return p;
}

int main(){

int num1,num2;

printf("Enter base and power : ");
scanf("%d %d",&num1,&num2);

printf("to the power = %d\n",ttp(num1,num2));


return 0;
}