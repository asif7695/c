#include<stdio.h>

int main(){

//here "||" means it have to meet at-least one of the condition
//here "&&" means it have to meet both conditions
/*
char ch;

printf("Enter a character : ");
scanf("%c",&ch);
ch=tolower(ch);
if (ch=='a' || ch== 'e'|| ch =='i' || ch=='o' || ch=='u')
{
    printf("vowel\n");
}
else
printf("consonant\n");
*/

    char chr;
    printf("Enter : ");
    scanf("%c",&chr);
    
    if(chr>='a' && chr<='z')
        printf("alphabet\n");
        
    else if(chr>='A' && chr<='Z')
        printf("capital\n");

return 0;
}