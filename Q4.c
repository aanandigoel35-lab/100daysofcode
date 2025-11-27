#include <stdio.h>

int main() {
    float radius, area, circumference;
    float pi = 3.14;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("\nArea of circle = %.2f", area);
    printf("\nCircumference of circle = %.2f", circumference);

    return 0;
}
