// 1
// 22
// 333



#include <stdio.h>

int main(){

int n=5, row, col;

for(row=1; row<=n; row++)
    {
    for(col=1; col<=row; col++)
        printf("%d ",row);
    printf("\n");
    }

return 0;
}