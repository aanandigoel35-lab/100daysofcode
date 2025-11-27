#include <stdio.h>
int main() {
    FILE *f;
    char ch;
    f = fopen("info.txt","r");

    if(f == NULL) {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(f)) != EOF)
        printf("%c", ch);

    fclose(f);
}
