// created_by_serly_eka_putri_23343083
#include <stdio.h>

int main() {
    int totalDetik, jam, menit, sisaDetik;

    printf("Masukkan jumlah waktu dalam detik : ");
    scanf("%d", &totalDetik);

    jam = totalDetik / 3600;           // Menghitung jam
    sisaDetik = totalDetik % 3600;     // Menghitung sisa detik setelah jam diambil

    menit = sisaDetik / 60;            // Menghitung menit
    sisaDetik %= 60;                   // Menghitung sisa detik setelah menit diambil

    printf("%d Detik Sama Dengan %d Jam %d Menit %d Detik\n", totalDetik, jam, menit, sisaDetik);

    return 0;
}
