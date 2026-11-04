#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];

    printf("Enter matrix elements:\n");
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) scanf("%d", &mat[i][j]);

    for(int i=0; i<r; i++) {
        int rsum = 0;
        for(int j=0; j<c; j++) rsum += mat[i][j];
        printf("Row %d Sum = %d\n", i + 1, rsum);
    }

    for(int j=0; j<c; j++) {
        int csum = 0;
        for(int i=0; i<r; i++) csum += mat[i][j];
        printf("Column %d Sum = %d\n", j + 1, csum);
    }
    return 0;
}