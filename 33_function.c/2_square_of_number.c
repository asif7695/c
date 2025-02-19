#include<stdio.h>

int square(int a){
    return a*a;
}


int main(){

int num1;

printf("Enter one number to see it's square : ");
scanf("%d",&num1);

printf("Square = %d\n",square(num1));


}