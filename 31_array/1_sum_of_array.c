#include<stdio.h>

int main(){
int i,n,sum=0,avg,num[20];
printf("Enter : ");
scanf("%d",&n);

for( i=0; i<=n-1; i++){
scanf("%d",&num[i]);
}

for( i=0; i<=n-1; i++){
sum=sum+num[i];
}

printf("total = %d\n",sum);
printf("avg = %.2f",(float)sum/n);
return 0;
}