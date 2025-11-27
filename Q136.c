#include <stdio.h>
enum menu {ADD=1,SUB,MUL};

int main() {
    int a=10,b=5;
    enum menu ch = ADD;

    switch(ch) {
        case ADD: printf("%d",a+b); break;
        case SUB: printf("%d",a-b); break;
        case MUL: printf("%d",a*b); break;
    }
}
