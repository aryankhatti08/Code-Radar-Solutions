#include <stdio.h>
int main(){
    int a,positive,negative,zero;
    scanf("%d %d %d",&positive,&negative,&zero);
    if(a==0){
        printf("%d",zero);
    }
    else if(a<0){
        printf("%d",negative);
    }
    else{
        printf("%d",positive);
    }
}