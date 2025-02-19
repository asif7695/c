#include<stdio.h>


int main()
{

int a=32,b=12,c;
//AND
c=a&b;  /* a=32---in binary                = 1 0 0 0 0 0
           b=12---in binary                = 0 0 1 1 0 0
           ---------------------------------------------
           a&b (multiply a and b in binary)= 0 0 0 0 0 0  = 0 (in decimal)
        */
printf("&= %d\n",c);
//OR
c=a|b;  /* a=32---in binary                = 1 0 0 0 0 0
           b=12---in binary                = 0 0 1 1 0 0
           ---------------------------------------------
           a|b (sum up a and b in binary)  = 1 0 1 1 0 0  = 44 (in decimal)
        */
printf("|= %d\n",c);
//EXOR
c=a^b;  /* a=32---in binary                = 1 0 0 0 0 0
           b=12---in binary                = 0 0 1 1 0 0
           ---------------------------------------------
           a^b(if there odd number of 1=1) = 1 0 1 1 0 0  = 44 (in decimal)
        */
printf("^= %d\n",c);




return 0;
}