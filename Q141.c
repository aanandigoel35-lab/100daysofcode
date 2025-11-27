#include <stdio.h>
struct student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct student s;
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printf("%s %d %.2f", s.name, s.roll, s.marks);
}
