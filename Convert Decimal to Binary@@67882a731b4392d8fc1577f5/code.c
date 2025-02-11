#include <stdio.h>

int main() {
    int a, rem = 0, bin = 0, place = 1;
    scanf("%d", &a);
    while (a > 0) {
        rem = a & 1;
        a = a >> 1;
        bin = bin + (rem * place);
        place = place * 10;
    }
    printf("%d", bin);
    return 0;
}