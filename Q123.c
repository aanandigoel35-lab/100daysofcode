#include <stdio.h>
int main() {
    FILE *f;
    char ch;
    int chars=0, words=0, lines=0;

    f = fopen("info.txt","r");

    while((ch=fgetc(f))!=EOF) {
        chars++;
        if(ch==' '||ch=='\n') words++;
        if(ch=='\n') lines++;
    }

    printf("Chars:%d Words:%d Lines:%d", chars, words+1, lines+1);
}
