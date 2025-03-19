void findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < n - 1 && arr[left] <= arr[left + 1]) 
        left++;
    
    if (left == n - 1) {
        printf("0\n");
        return;
    }

    while (right > 0 && arr[right] >= arr[right - 1]) 
        right--;

    int min = arr[left], max = arr[left];
    
    for (int i = left; i <= right; i++) {
        if (arr[i] < min) 
            min = arr[i];
        if (arr[i] > max) 
            max = arr[i];
    }

    while (left > 0 && arr[left - 1] > min) 
        left--;

    while (right < n - 1 && arr[right + 1] < max) 
        right++;

    printf("%d\n", right - left + 1);
}