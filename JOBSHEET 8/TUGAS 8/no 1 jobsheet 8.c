///createad_by_Serly_Eka_Putri_23343083

#include <stdio.h>

// Deklarasi fungsi rekursif untuk perkalian
int perkalian_rekursif(int a, int b) {
    // Basis rekursi: jika salah satu operand menjadi 0, hasilnya adalah 0
    if (b == 0) {
        return 0;
    } 
    // Rekurens: kurangkan satu operand dan tambahkan dengan hasil rekursif
    else {
        return a + perkalian_rekursif(a, b - 1);
    }
}

int main() {
    // Contoh penggunaan untuk 12 x 6
    int hasil_perkalian = perkalian_rekursif(12, 6);
    
    // Cetak hasil perkalian
    printf("Hasil perkalian: %d\n", hasil_perkalian);

    return 0;
}
