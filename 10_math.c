#include<stdio.h>
#include<math.h>


int main () {

// absolute value
    int absolute=abs(-5);
    printf("absolute value : %d\n",absolute);
//squire root
    double root=sqrt(64);
    printf("squire root : %.1lf\n",root);
//power 
    double power=pow(5,2);
    printf("power : %.1lf\n",power);


    double x=10;
//log
    double result = log(x);
    printf("log(%.1lf) : %.1lf\n",x,result);
//sin,cos,tan
    double res2= sin(x);
    printf("sin(%.1lf) : %.1lf\n",x,res2);
//round
    double res3=round(5.55);  // round function is to round the value inside 
    printf("round : %.1lf\n",res3);
//trunc
    double res4=trunc(5.5225);  //trunc function is to remove all the decimal numbers from the value 
    printf("trunc : %lf\n",res4);
//ceiling number
    double res5=ceil(5.5225);  //ceil function is to get the upper non-decimal number from the value 
    printf("ceiling number : %lf\n",res5);
//floor number
    double res6=floor(5.5225);  //floor function is to get the lower non-decimal number from the value 
    printf("trunc : %lf\n",res4);


return 0; 
}