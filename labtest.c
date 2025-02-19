#include<stdio.h>
int main(){
int n=30,i,row,col;

for(row=1;row<=n;row++ ){

    for(col=n;col>=row-1;col--){
        printf(" ");
    }
    for(col=1;col<=row;col++){
        printf("%d ",col);
    }

    printf("\n");
    }

for(row=n-1;row>=1;row-- ){

    for(col=n;col>=row-1;col--){
        printf(" ");
    }
    for(col=1;col<=row;col++){
        printf("%d ",col);
    }
    printf("\n");

}

return 0;
}

