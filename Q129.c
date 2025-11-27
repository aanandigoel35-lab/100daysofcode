#include <stdio.h>
int main() {
    FILE *f;
    int x, sum=0, count=0;

    f = fopen("numbers.txt","r");

    while(fscanf(f,"%d",&x) != EOF) {
        sum += x;
        count++;
    }

    printf("Sum:%d Average:%.2f", sum, (float)sum/count);
}
