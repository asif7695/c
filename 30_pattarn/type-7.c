// 123
// 12
// 1


#include <stdio.h>

int main(){

int n=5, row, col;

for(row=n; row>=1; row--)
    {
    for(col=1; col<=row; col++)
        printf("%d ",col);
    printf("\n");
    }

return 0;
}