// a
// bb
// ccc


#include <stdio.h>

int main(){

int n=4, row, col,c=1;

for(row=1; row<=n; row++)
    {
    for(col=1; col<=row; col++){
        printf("%d ",c++);
           
    }
    
    printf("\n");
    

}
return 0;
}