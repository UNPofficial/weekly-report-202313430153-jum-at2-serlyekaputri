#include <stdio.h>

//create by 23343083_serly eka putri

int main() {
    int n; // Jumlah mahasiswa
    printf("Masukkan jumlah nama mahasiswa : ");
    scanf("%d", &n);

    // Membersihkan newline character dari buffer
    while (getchar() != '\n');

    // Deklarasi array untuk menampung nama mahasiswa
    char nama_mahasiswa[n][100]; // Maksimum 100 karakter per nama

    // Meminta input nama mahasiswa
    for (int i = 0; i < n; i++) {
        printf("Masukkan nama mahasiswa ke-%d : ", i + 1);

        // Menggunakan fgets untuk membaca input nama
        fgets(nama_mahasiswa[i], sizeof(nama_mahasiswa[i]), stdin);
        // Menghapus newline character dari nama (jika ada)
        if (nama_mahasiswa[i][strlen(nama_mahasiswa[i]) - 1] == '\n') {
            nama_mahasiswa[i][strlen(nama_mahasiswa[i]) - 1] = '\0';
        }
    }

    // Menampilkan nama-nama mahasiswa
    printf("\nNama-nama mahasiswa :\n");
    for (int i = 0; i < n; i++) {
        printf("Mahasiswa ke-%d : %s\n", i + 1, nama_mahasiswa[i]);
    }

    return 0;
}
