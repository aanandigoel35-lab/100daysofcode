#include <stdio.h>
struct student { char name[20]; float marks; };

int main() {
    struct student s[5];
    int i, max=0;

    for(i=0;i<5;i++)
        scanf("%s %f", s[i].name, &s[i].marks);

    for(i=1;i<5;i++)
        if(s[i].marks > s[max].marks) max = i;

    printf("%s %.2f", s[max].name, s[max].marks);
}
