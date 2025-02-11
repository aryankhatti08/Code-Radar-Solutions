#include <stdio.h>


int main() {
    float a;
    float b;
    float c;

    scanf("%f %f %f", &a,&b, &c);
    float avg=(a+b+c)/3;
    printf("Average: %0.2f",avg);
    return 0;
}