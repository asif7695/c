#include<stdio.h>


int main()
{
    int num1=20,num2=30;
    int max= (num1>num2) ? num1 : num2;  // expression 1 ? expression 2 : expression 3
                                         // if expression 1== true then it'll print expression 2
                                         // if expression 1== false then it'll print expression 3
    printf("%d",max);

    printf("\n");
    // odd or even
    int num=454;
    (num%2==0) ? printf("%d is even",num) : printf("%d is odd",num);
    





    return 0;
}