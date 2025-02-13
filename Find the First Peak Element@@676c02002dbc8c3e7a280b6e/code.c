#include <stdio.h>

int peak(int arr[], int a) {
    for (int i = 0; i < a; i++) {
        if (i == 0) { // First element
            if (a == 1 || arr[i] > arr[i + 1]) {
                return arr[i];
            }
        } else if (i == a - 1) { // Last element
            if (arr[i] > arr[i - 1]) {
                return arr[i];
            }
        } else { // Middle elements
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                return arr[i];
            }
        }
    }
    return -1; // No peak found
}

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", peak(arr, a));
    return 0;
}