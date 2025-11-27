#include <stdio.h>

int main() {
    int d;
    float fine=0;

    printf("Enter late days: ");
    scanf("%d",&d);

    if (d <= 5)
        fine = d * 2;
    else if (d <= 10)
        fine = 5*2 + (d-5)*4;
    else if (d <= 30)
        fine = 5*2 + 5*4 + (d-10)*6;
    else
        printf("Membership Cancelled");

    if (d <= 30)
        printf("Fine = Rs %.2f", fine);

    return 0;
}
