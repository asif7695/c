#include<stdio.h>
int main(){
int array1[2][2]={ {1,2},{3,4}}, array2[2][2]={{5,6},{7,8}}, array3[2][2];

for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        array3[i][j]=array1[i][j]+array2[i][j];
}

}

for(int i=0 ; i<2; i++){
    for(int j=0 ; j<2; j++){
        printf("%d ",array3[i][j]);
    }

printf("\n");
}







return 0;
}