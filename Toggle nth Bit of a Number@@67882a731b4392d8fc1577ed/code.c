#include <stdio.h>
int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);
    printf("%d", num ^ (1 << pos));
    return 0;
}