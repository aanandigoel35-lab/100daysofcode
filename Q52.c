#include <stdio.h>
int main() {
    int n[]={1,3,5,3,1};
    for(int i=0;i<5;i++){
        for(int j=1;j<=n[i];j++) printf("*\n");
        printf("\n");
    }
}
