///created_by_Serly_Eka_Putri_23343083

#include <stdio.h>
#include <math.h>

// Deklarasi fungsi untuk menghitung luas dan keliling lingkaran
float luas(float jari_jari) {
    return M_PI * pow(jari_jari, 2); // Menggunakan konstanta Pi dari math.h
}

float keliling(float jari_jari) {
    return 2 * M_PI * jari_jari;
}

int main() {
    // Input jari-jari lingkaran dari pengguna
    float jari_jari;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    // Memanggil fungsi untuk menghitung luas dan keliling lingkaran
    float luas_lingkaran = luas(jari_jari);
    float keliling_lingkaran = keliling(jari_jari);

    // Menampilkan hasil perhitungan
    printf("Luas lingkaran: %.2f\n", luas_lingkaran);
    printf("Keliling lingkaran: %.2f\n", keliling_lingkaran);

    return 0;
}
