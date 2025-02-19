// a
// bb
// ccc


#include <stdio.h>

int main(){

int n=5, row, col;

for(row=1; row<=n; row++)
    {
    for(col=1; col<=row; col++){
        printf("%c ",row+64);    
    }
    
    printf("\n");
    

}
return 0;
}