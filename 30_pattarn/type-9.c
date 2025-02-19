//   1
//  12
// 123


#include <stdio.h>

int main(){

int n=5,i, row, col;

for(row=1; row<=n; row++)
    {
    for(col=1; col<=n-row; col++){
         printf(" ");
        }
    for(col=1; col<=row; col++){
        printf("*");
        }
    printf("\n");
    };




return 0;
}