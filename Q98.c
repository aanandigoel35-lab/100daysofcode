#include <stdio.h>
int main(){
    char s[100];
    gets(s);

    printf("%c ",s[0]);
    for(int i=1;s[i];i++){
        if(s[i]==' ') printf("%c ",s[i+1]);
        if(s[i+1]=='\0') printf("%s",&s[i]);
    }
}
