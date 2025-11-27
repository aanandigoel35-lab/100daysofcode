#include <stdio.h>
struct student { int roll; };

void show(struct student s) {
    printf("%d", s.roll);
}

int main() {
    struct student s = {10};
    show(s);
}
