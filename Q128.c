#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *f;
    char ch;
    int v=0,c=0;

    f = fopen("info.txt","r");

    while((ch = fgetc(f)) != EOF) {
        ch = tolower(ch);
        if(isalpha(ch)) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels:%d Consonants:%d", v, c);
}
