#include<stdio.h>

void display(int a[]){

    for (int i = 0; i < 5; i++)
    {
        printf("\n %d",a[i]);
    }
}

int main(){
    int num1[]={1,2,3,4,5};

    display(num1);

}