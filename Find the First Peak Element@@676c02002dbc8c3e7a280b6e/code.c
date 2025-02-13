#include <stdio.h>

int peak(int arr[], int a) {
    for (int i = 0; i < a; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == a - 1 || arr[i] >= arr[i + 1])) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int result = peak(arr, a);
    printf("%d\n", result);
    return 0;
}