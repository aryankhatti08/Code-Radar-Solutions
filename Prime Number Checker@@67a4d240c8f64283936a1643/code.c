#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    printf("Enter a number to be checked\n");
    long long int value;
    scanf("%lld", &value);
    long long int stop = round(sqrt(value));

    for (int i = 2; i < stop + 1; i++)
    {
        if (value % i == 0)
        {
            printf("Not prime\n");
            exit(0);
        }         
        else continue;
    }
    printf("Is prime\n");
    exit(0);
}