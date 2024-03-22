// created by serly eka putri_23343083
#include <stdio.h>

int main() {
    printf("== program pembayaran ==\n");
    int total_belanja = 0; // tambahkan titik koma di akhir baris ini

    printf("Inputkan total belanja: ");
    scanf("%d", &total_belanja); // ubah format specifier menjadi %d untuk tipe data int

    // menggunakan blok percabangan if
    if (total_belanja > 100000) {
        printf("Selamat, anda mendapatkan hadiah !\n");
    }

    printf("Terima kasih sudah berbelanja di toko kami\n\n");
    
    return 0; // tambahkan return 0 sebagai indikator bahwa program berakhir dengan sukses
}
