#include <stdio.h>
int main() {
    FILE *f;
    char name[30];
    int roll, marks;

    f = fopen("student.txt","w");

    for(int i=0;i<3;i++) {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(f,"%s %d %d\n", name, roll, marks);
    }
    fclose(f);

    f = fopen("student.txt","r");
    while(fscanf(f,"%s %d %d", name, &roll, &marks) != EOF)
        printf("%s %d %d\n", name, roll, marks);
}
