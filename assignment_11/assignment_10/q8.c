#include <stdio.h>

void multiply(int a[10][10], int b[10][10], int res[10][10], int r1, int c1, int c2, int i, int j, int k) {
    if (i == r1) return;
    if (j == c2) {
        multiply(a, b, res, r1, c1, c2, i + 1, 0, 0);
        return;
    }
    if (k == c1) {
        multiply(a, b, res, r1, c1, c2, i, j + 1, 0);
        return;
    }
    res[i][j] += a[i][k] * b[k][j];
    multiply(a, b, res, r1, c1, c2, i, j, k + 1);
}

int main() {
    int r1, c1, r2, c2, i, j;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    int a[10][10], b[10][10], res[10][10] = {0};
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) for (j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) for (j = 0; j < c2; j++) scanf("%d", &b[i][j]);
    
    multiply(a, b, res, r1, c1, c2, 0, 0, 0);
    
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}