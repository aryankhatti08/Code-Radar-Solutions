#include <stdio.h>
int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);
    printf("%d", (num >> pos) & 1);
    return 0;
}