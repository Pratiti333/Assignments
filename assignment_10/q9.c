#include <stdio.h>

void colSum(int m[10][10], int r, int c, int i, int j, int sum[]) {
    if (i == r) return;
    sum[j] += m[i][j];
    if (j + 1 < c) colSum(m, r, c, i, j + 1, sum);
    else colSum(m, r, c, i + 1, 0, sum);
}

int minCol(int sum[], int c, int j, int min, int idx) {
    if (j == c) return idx;
    if (sum[j] < min) {
        min = sum[j];
        idx = j;
    }
    return minCol(sum, c, j + 1, min, idx);
}

int main() {
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int m[10][10];
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &m[i][j]);
    int sum[10] = {0};
    colSum(m, r, c, 0, 0, sum);
    int mc = minCol(sum, c, 1, sum[0], 0);
    printf("Column with minimum sum = %d (sum = %d)\n", mc, sum[mc]);
    return 0;
}