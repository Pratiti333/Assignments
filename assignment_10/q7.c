#include <stdio.h>

int isSym(int m[10][10], int n, int i, int j) {
    if (i == n) return 1;
    if (j == n) return isSym(m, n, i + 1, 0);
    if (i < j && m[i][j] != m[j][i]) return 0;
    return isSym(m, n, i, j + 1);
}

int main() {
    int n, i, j;
    printf("Enter order: ");
    scanf("%d", &n);
    int m[10][10];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    if (isSym(m, n, 0, 0)) printf("Symmetric\n");
    else printf("Not Symmetric\n");
    return 0;
}