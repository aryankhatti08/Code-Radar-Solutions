#include <stdio.h>

int main() {
    int a,bin=0,rem=0,place=1,b;
    scanf("%d",&a);
    b=a>>31;
    (b&1)?printf("Set"):printf("Not Set");
    return 0;
}