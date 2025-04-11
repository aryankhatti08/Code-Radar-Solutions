#include <stdio.h>
int main(){
    int a,positive,negative,zero;
    scanf("%d",&a);
    if(a==0){
        printf("Zero");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
}