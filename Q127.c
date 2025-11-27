#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in,*out;
    char ch;

    in = fopen("input.txt","r");
    out = fopen("output.txt","w");

    while((ch = fgetc(in)) != EOF)
        fputc(toupper(ch), out);

    fclose(in);
    fclose(out);
}
