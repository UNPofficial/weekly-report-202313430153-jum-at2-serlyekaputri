///created_by_Serly_Eka_Putri_23343083

#include <stdio.h>

// Deklarasi fungsi-fungsi untuk operasi aritmetik
int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(int a, int b) {
    // Menggunakan tipe data float untuk hasil pembagian
    // untuk menangani pembagian yang menghasilkan pecahan
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Pembagian oleh nol tidak dapat dilakukan.\n");
        // Mengembalikan nilai yang tidak valid sebagai penanda kesalahan
        return -1.0;
    }
}

int main() {
    // Contoh penggunaan fungsi-fungsi aritmetik
    int operand1 = 10, operand2 = 5;
    
    printf("Penjumlahan: %d\n", tambah(operand1, operand2));
    printf("Pengurangan: %d\n", kurang(operand1, operand2));
    printf("Perkalian: %d\n", kali(operand1, operand2));
    
    // Memanggil fungsi pembagian dengan penanganan kesalahan
    float hasil_pembagian = bagi(operand1, operand2);
    if (hasil_pembagian != -1.0) {
        printf("Pembagian: %.2f\n", hasil_pembagian);
    }

    return 0;
}
