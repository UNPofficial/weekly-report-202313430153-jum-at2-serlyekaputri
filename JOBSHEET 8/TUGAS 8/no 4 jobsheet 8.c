///created_by_Serly_Eka_Putri_23343083

#include <stdio.h>

// Deklarasi fungsi untuk menghitung besarnya potongan berdasarkan jumlah pembelian
float potong(float total_pembelian) {
    float diskon = 0.0;

    if (total_pembelian > 1000000 && total_pembelian <= 3000000) {
        // Diskon 20% untuk pembelian di atas 1 juta dan di bawah 3 juta
        diskon = 0.2 * total_pembelian;
    } else if (total_pembelian > 3000000) {
        // Diskon 35% untuk pembelian di atas 3 juta
        diskon = 0.35 * total_pembelian;
    }

    return diskon;
}

int main() {
    float total_pembelian;

    // Input total pembelian dari pengguna
    printf("Total Pembelian (Rp.): ");
    scanf("%f", &total_pembelian);

    // Memanggil fungsi potong untuk menghitung besarnya diskon
    float besar_diskon = potong(total_pembelian);

    // Menghitung besar yang harus dibayarkan setelah diskon
    float total_setelah_diskon = total_pembelian - besar_diskon;

    // Menampilkan hasil perhitungan
    printf("\nProgram Hitung Potongan\n");
    printf("Total Pembelian (Rp.)\t\t: %.2f\n", total_pembelian);
    printf("Besar Diskon\t\t\t: %.2f\n", besar_diskon);
    printf("Besar Yang Harus Dibayarkan\t: %.2f\n", total_setelah_diskon);

    return 0;
}
