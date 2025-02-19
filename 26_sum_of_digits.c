#include<stdio.h>

int main(){

int num,sum=0,temp;
printf("Enter : ");
scanf("%d",&num);
temp=num;

while(temp!=0)
{
    num=temp%10;
    sum=sum+num;
    temp=temp/10;
}
printf("%d",sum);

return 0;
}