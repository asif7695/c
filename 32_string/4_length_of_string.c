#include<stdio.h>
#include<string.h>

int main(){
char name[]={"oh ho ganja ganja"};

//type-1
int len = strlen(name);
printf("length : %d\n",len);

//type-2
int i=0, len2=0;
while (name[i] != '\0')
{
    len2++;
    i++;
}
printf("length2 : %d\n",len2);



return 0;
}