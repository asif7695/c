// *****
//  ***
//   *

#include<stdio.h>

int main (){
int col,row,n=5;

for(row=n; row >=1; row-- ){
    
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


// for(row=1; row <=n; row++ ){
    
//     for(col=n-row; col>=1; col--)
//     {
//         printf("*");
//     }
    
//     for ( col=0; col<=n-row; col++ )
//     {
//         printf("*");
//     }
//     printf("\n");
//     for(col=row; col>=1; col--){
//         printf(" ");
//     }
// }
return 0;
}