#include<stdio.h>

int main(){

int num,sum=0,temp;
printf("Enter : ");
scanf("%d",&num); //num=123
temp=num;  //temp=123

while(temp!=0)
{
num=temp%10; //num=3,2,1
sum=sum*10+num;  //3,32,321
temp=temp/10;  //12,1,0
}
printf("%d",sum);




return 0;
}