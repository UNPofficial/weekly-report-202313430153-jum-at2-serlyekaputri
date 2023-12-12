///created_by_Serly_Eka_Putri_23343083

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters at positions i and j
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char kalimat[100];

    // Input kalimat
    printf("Masukkan Kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Menghapus karakter newline yang ditambahkan oleh fgets
    kalimat[strcspn(kalimat, "\n")] = '\0';

    // Memanggil fungsi untuk membalikkan kalimat
    reverseString(kalimat);

    // Menampilkan kalimat terbalik
    printf("Kebalikannya: %s\n", kalimat);

    return 0;
}
