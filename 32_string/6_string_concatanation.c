#include <stdio.h>
#include<string.h>

int main()
{
    char str1[] = {"asif "}, str2[] = {"dead"};

    strcat(str1, str2);
    printf("strcat1 : %s \n", str1);

    strcat(str1," alive");
    printf("strcat2 : %s\n", str1);
    return 0;
}