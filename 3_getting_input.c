#include<stdio.h>

int main(){

    /*int num1;
    char c;

    printf("Enter a number and a char: ");
    scanf("%d %c",&num1,&c);  // scanf is for taking input
    printf("%d,%c \n",num1,c);


    */
    printf("new--------------------\n\n\n");
    printf("Enter ur name:");
    char name[20];
/*    scanf("%s",&name);
    printf("name : %s",name);  //in this  method it only count one single word no space*/
    fgets(name,sizeof(name),stdin);

    puts(name);


    return 0;
}