#include <stdio.h>
struct date { int d,m,y; };
struct emp { char name[20]; struct date doj; };

int main() {
    struct emp e = {"Raj",{1,2,2023}};
    printf("%s %d/%d/%d", e.name, e.doj.d, e.doj.m, e.doj.y);
}
