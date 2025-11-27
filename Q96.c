#include <stdio.h>
int main(){
    char s[100];
    int i=0,start=0;
    gets(s);

    while(1){
        if(s[i]==' '||s[i]=='\0'){
            for(int j=i-1;j>=start;j--) printf("%c",s[j]);
            printf(" ");
            start=i+1;
        }
        if(s[i]=='\0') break;
        i++;
    }
}
