#include <stdio.h>

int main() {
    int a, arr[100];
    int freq[101] = {0};

    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    for (int i = 0; i < a; i++) {
        if (freq[arr[i]] != 0) {
            printf("%d %d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0;
        }
    }

    return 0;
}