#include <stdio.h>

int main() {
    int num, pos = 0;
    scanf("%d", &num);
    while ((num & 1) == 0) {
        num >>= 1;
        pos++;
    }
    printf("%d", pos);
    return 0;
}