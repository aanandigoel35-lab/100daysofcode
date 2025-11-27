#include <stdio.h>
struct emp { char name[20]; int id; };

int main() {
    FILE *f;
    struct emp e = {"Aman",101}, r;

    f = fopen("emp.bin","wb");
    fwrite(&e, sizeof(e), 1, f);
    fclose(f);

    f = fopen("emp.bin","rb");
    fread(&r, sizeof(r), 1, f);
    printf("%s %d", r.name, r.id);
    fclose(f);
}
