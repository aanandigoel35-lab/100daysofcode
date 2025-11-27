#include <stdio.h>
struct student { int roll; };

struct student get() {
    struct student s = {101};
    return s;
}

int main() {
    struct student s = get();
    printf("%d", s.roll);
}
