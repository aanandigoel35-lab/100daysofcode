#include <stdio.h>
int main() {
    FILE *f;
    char text[100];

    f = fopen("info.txt","a");
    gets(text);
    fprintf(f,"\n%s", text);
    fclose(f);

    printf("Text appended successfully");
}
