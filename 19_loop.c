#include<stdio.h>
int main(){

int i=1;


for(i=1; i<=5; i++) // for(Initialization ; Condition ; CounterUpdate)
    printf("%d fk u\n",i);


while (i<=5)
{
    printf("%d\n",i);
    i++;
}


do
{
    printf("%d\n",i);
    i++;
} while (i<=5);


return 0;
}