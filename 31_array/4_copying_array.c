#include<stdio.h>

int main(){

int array1[5]={1,2,3,4,5}, array2[5],i;


printf("array1 = ");
for(i=0; i<=4;i++){
printf("%d ",array1[i]);
}

for(i=0; i<=4; i++){
    array2[i]=array1[i];
    printf("\n");
}
printf("array2 = ");
for(i=0; i<=4;i++){
printf("%d ",array2[i]);
}

return 0;
}