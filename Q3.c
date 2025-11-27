#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea of rectangle = %.2f", area);
    printf("\nPerimeter of rectangle = %.2f", perimeter);

    return 0;
}
