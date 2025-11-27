#include <stdio.h>
int main(){
    char s[100]; int sp=0,d=0,sc=0;
    gets(s);

    for(int i=0;s[i];i++){
        if(s[i]==' ') sp++;
        else if(s[i]>='0'&&s[i]<='9') d++;
        else sc++;
    }

    printf("Spaces=%d Digits=%d Special=%d",sp,d,sc);
}
