#include <stdio.h>

void analyzeString(const char *str, int *vowels, int *consonants, int *digits, int *spaces, int *special) {
    *vowels = *consonants = *digits = *spaces = *special = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A'); // Convert uppercase to lowercase
        }

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        } else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        } else if (ch == ' ') {
            (*spaces)++;
        } else {
            (*special)++;
        }
    }
}

int main() {
    char str[] = "Hello World! 123 #2026";
    int v, c, d, s, sp;

    analyzeString(str, &v, &c, &d, &s, &sp);

    printf("String: %s\n", str);
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Digits: %d\n", d);
    printf("Spaces: %d\n", s);
    printf("Special Characters: %d\n", sp);

    return 0;
}