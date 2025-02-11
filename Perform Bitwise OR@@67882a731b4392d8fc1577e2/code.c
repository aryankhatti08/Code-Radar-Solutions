#include <stdio.h>

int main() {
    int a;
    int b;
    int result;

    scanf("%d %d",&a,&b);
    result = a | b;
    printf("%d",result);
    return 0;
}