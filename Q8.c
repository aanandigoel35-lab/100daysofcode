#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("\nSum of first %d natural numbers = %d", n, sum);

    return 0;
}
