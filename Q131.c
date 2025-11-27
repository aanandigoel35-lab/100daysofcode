#include <stdio.h>
enum day {SUN,MON,TUE,WED,THU,FRI,SAT};

int main() {
    for(int i=SUN;i<=SAT;i++)
        printf("%d\n", i);
}
