#include <stdio.h>
int main() {
    FILE *s,*d;
    char ch;

    s = fopen("a.txt","r");
    d = fopen("b.txt","w");

    while((ch=fgetc(s))!=EOF)
        fputc(ch,d);

    fclose(s); fclose(d);
}
