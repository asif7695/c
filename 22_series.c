#include<stdio.h>

int main(){
//1+2+3+4+.....+n
int num,i,sum;
printf("Enter the last num of series : ");
scanf("%d",&num);
printf("1+2+3+....+%d = ",num);

for(i=1; i<=num ; i=i+1 )
    {
    sum = sum+i;
    }
    printf("%d",sum);









return 0;


}