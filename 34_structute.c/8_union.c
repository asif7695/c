#include<stdio.h>
// union is same as structure but the storage size is different


union test {
    int a,b;
};

int main(){

    union test t1;

    t1.a=10;

    printf("a= %d\n",t1.a);
    printf("b= %d\n",t1.b);

return 0;
}