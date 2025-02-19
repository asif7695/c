#include<stdio.h>
#include<string.h>
int main(){

FILE *file;
char name[10]="ganja baba ";
int i,length = strlen(name);

file = fopen("test.txt","a"); // in fopen first is file name and second one is mode 
    // in mode r = read , w = write , a = append;

if( file == '\0'){
    printf("file doesn't created\n");
}

else{
    printf("file does created\n");
    for(i=0 ; i<length ; i++){
        fputs(name[i],file);
    }    
    
    
    fclose(file);
}
return 0;
}