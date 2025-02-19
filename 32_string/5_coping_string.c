#include<stdio.h>
#include<string.h>

int main(){
char name[]={"asif asif"}, copy[20];

strcpy(copy,name);  //strcpy(where to copy, from where to copy)

printf("copy : %s",copy);


return 0;
}