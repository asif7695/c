#include<stdio.h>

int main(){
int condition;
float temp,conv_temp;

printf("press 1 for fahrenheit to celsius\n");
printf("press 2 for celsius to fahrenheit\n");
printf("Press : ");
scanf("%d",&condition);
switch(condition)
{
case 1 :
    {
    printf("Enter fahrenheit temp : ");
    scanf("%f",&temp);
    conv_temp=(temp-32)/1.8;
    printf("Converted temp :");
    printf("%f",conv_temp);
    break;
    
    }
    
case 2 :
    {printf("Enter celsius temp : ");
    scanf("%f",temp);
    conv_temp=(1.8*temp)+32;
    printf("Converted temp :");
    printf("%f",conv_temp);
    break;
    
    }
    

default:
    printf("Invalid input");
}


return 0 ;
}