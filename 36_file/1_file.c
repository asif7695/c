#include<stdio.h>
int main(){

FILE *file;

file = fopen("test.txt","w");

if( file == '\0'){
    printf("file doesn't created\n");
}

else
    printf("file does created\n");
    fclose(file);

return 0;
}