#include<stdio.h>

int main(){

int n1,num1,num2,n2,rem,gcd,lcm;
printf("Enter : ");
scanf("%d %d",&num1,&num2);
n1=num1;
n2=num2;


while(n2!=0)
{
    rem=n1%n2;
    n1=n2;
    n2=rem;
}
gcd=n1;

printf("gcd = %d\n",gcd);
lcm=(num1*num2)/gcd;
printf("lcm = %d",lcm);

return 0;

}