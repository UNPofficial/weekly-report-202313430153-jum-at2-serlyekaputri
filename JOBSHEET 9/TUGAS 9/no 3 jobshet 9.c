///created_by_Serly_Eka_Putri_23343083

///program A balmond = layla + 1
#include <stdio.h>

int main() {
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    // a) Nilai Layla
    printf("a) Nilai Layla: %d\n", Layla);

    // b) Nilai Balmond
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;
}
///program B balmond = *layla + 1
#include <stdio.h>

int maint() {
    int Lesley = 57082;
    int *Layla = &Lesley;
    int Balmond = *Layla + 1;

    // a) Nilai Layla
    printf("a) Nilai Layla: %p\n", (void *)Layla);

    // b) Nilai Balmond
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;
}




