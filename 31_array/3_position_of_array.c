#include<stdio.h>
int main(){

int i,v=6,p=-1,main[5]={1,2,3,4,5};

for(i=0; i<=4;i++){

    if(v==main[i]){
        p=i+1;
        break;
    }
}
if(p==-1)
printf("not found");
else
{
    printf("pos = %d",p);
}




return 0;
}
