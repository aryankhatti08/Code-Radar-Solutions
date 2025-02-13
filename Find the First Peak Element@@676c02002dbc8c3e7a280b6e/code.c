#include <stdio.h>

int peak(int arr[], int a) {
    if (a == 1) return arr[0];  // Only one element

    if (arr[0] > arr[1]) return arr[0];  // First element peak
    if (arr[a - 1] > arr[a - 2]) return arr[a - 1];  // Last element peak

    for (int i = 1; i < a - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return arr[i];
    }
    
    return -1; 
}

int main() {
    int a, arr[100];
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", peak(arr, a));
    return 0;
}