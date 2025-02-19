//   *
//  ***
// *****

#include<stdio.h>

int main (){
int col,row,n=5;


for(row=1; row <=n; row++ ){
    
    for(col=1; col<=n-row; col++)
    {
        printf(" ");
    }
    for(col=1; col<=row; col++)
    {
        printf("*");
    }
    
    for(col=1; col<=row-1; col++)
    {
        printf("*");
    }
    printf("\n");
}

return 0;
}