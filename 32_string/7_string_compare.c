#include <stdio.h>
#include<string.h>

int main()
{
    char str1[] = {"asif"}, str2[] = {"asif"};

    int d = strcmp(str1,str2);

    if ( d == 0 ){
    printf("strings are equal\n");
    }
    else
    printf("strings are not equal\n");


return 0;
}