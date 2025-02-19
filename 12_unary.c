#include<stdio.h>

int main(){
// here + and - is to show plus or minus value of a
int x=10;
int res1=+x,res2=-x;
printf("+x : %d , -x : %d\n",res1,res2);



//increment and decrement operator
    /*
    pre-increment:  ++x = increments x by one BEFORE it is used
    post-increment: x++ = increments x by one AFTER it is used
    
    pre-decrement:  --x = decrements x by one BEFORE it is used
    post-decrement: x-- = decrements x by one AFTER it is used
    */

int m=2;
int n=m++;
printf("M = %d , N = %d",m,n);

return 0;
}