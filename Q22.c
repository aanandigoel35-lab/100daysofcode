#include <stdio.h>

int main() {
    float cp, sp, p, l;

    printf("Enter CP and SP: ");
    scanf("%f%f",&cp,&sp);

    if (sp > cp) {
        p = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", p);
    }
    else if (cp > sp) {
        l = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", l);
    }
    else
        printf("No Profit No Loss");

    return 0;
}
