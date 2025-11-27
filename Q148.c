#include <stdio.h>
#include <string.h>
struct emp { char name[20]; int id; };

int main() {
    struct emp a={"Ram",1}, b={"Ram",1};

    if(a.id==b.id && strcmp(a.name,b.name)==0)
        printf("Same");
    else
        printf("Different");
}
