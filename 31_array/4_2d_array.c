#include<stdio.h>
int main (){

//array_name[RowSize][ColSize]
int array[3][4]={
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}
};
for(int i=0 ; i<=2; i++){

    for(int j=0 ; j<=3; j++){
        printf("%d ",array[i][j]);
    }
printf("\n");
}


return 0;
}