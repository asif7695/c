#include<stdio.h>


int factorial( int a ){
    if(a<=1)
        return 1;

    else
        return a*factorial(a-1);
        // in recursion we recall our function inside the function
}

int main(){
int res;

res = factorial(0);

printf("%d",res);



return 0;
}