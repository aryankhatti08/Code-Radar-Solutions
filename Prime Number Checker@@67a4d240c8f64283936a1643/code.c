#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    double numbers[] = {
        2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 
    };
    int count = sizeof(numbers) / sizeof(numbers[0]);

    printf("Prime numbers in the list:\n");
    for (int i = 0; i < count; i++) {
        int num = (int)numbers[i];
        if (is_prime(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}