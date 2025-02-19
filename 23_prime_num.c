#include<stdio.h>

int main(){
int num,i,count;
i=1;
printf("Enter a number : ");
scanf("%d",&num);

for(i=1; i<=100; i++){
    if (num<=1)
    {
        count=1;
    }


    for ( i = 2; i <num ; i++)
    {
        if (num%i==0)
        {
            count++; 
            break;   
        }
    }
        
    if (count==0)
    {
        printf("prime");
    }
    else
    {
        printf("non-prime");
    }

}


return 0;
}