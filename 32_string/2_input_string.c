#include<stdio.h>

int main(){
char name[10];
printf("enter a string : ");
//scanf("%s",&name);
gets(name);  // gets can read spaces
printf("Output : %s",name);


return 0;
}