#include<stdio.h>

int main(){

int n,max,min,num[20],i;
printf("Enter : ");
scanf("%d",&n);

for(i=0; i<n;i++)
{
scanf("%d",&num[i]);
}
max=num[0];
for(i=0;i<n;i++){
    if(max<num[i])
    max=num[i];
}
printf("max = %d\n",max);

min=num[0];
for(i=0;i<n;i++){
    if(min>num[i])
    min=num[i];
}
printf("min = %d\n",min);

return 0;
}