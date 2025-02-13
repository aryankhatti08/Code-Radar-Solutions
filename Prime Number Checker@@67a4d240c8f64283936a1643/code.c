int isPrime(int n){
    int prime = 1;

    if (n < 2) {
        prime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime) {
        return 1;
    } else {
        return 0;
    }
}