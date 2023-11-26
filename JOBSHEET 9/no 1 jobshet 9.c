///created_by_Serly_Eka_Putri_23343083

#include <stdio.h>

void printSubstring(char *str, int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("%c", *(str + i));
    }
}

int main() {
    char text[] = "BORLAND";
    int length = sizeof(text) / sizeof(text[0]) - 1; // -1 to exclude the null terminator

    for (int i = 0; i < length; i++) {
        for (int j = length - 1; j >= i; j--) {
            printSubstring(text, i, j);
        }
        printf("\n");
    }

    return 0;
}

