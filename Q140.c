#include <stdio.h>
enum gender {MALE,FEMALE};

struct person {
    char name[20];
    enum gender g;
};

int main() {
    struct person p = {"Aman", MALE};
    printf("%s %d", p.name, p.g);
}
