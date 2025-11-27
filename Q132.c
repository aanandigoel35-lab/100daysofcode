#include <stdio.h>
enum light {RED,YELLOW,GREEN};

int main() {
    enum light s = RED;
    if(s==RED) printf("Stop");
    else if(s==YELLOW) printf("Wait");
    else printf("Go");
}
