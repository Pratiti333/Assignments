#include <stdio.h>

int main() {
    int n;
    printf("Enter order of square matrix (N): ");
    scanf("%d", &n);
    int mat[n][n];

    printf("Enter matrix elements:\n");
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &mat[i][j]);

    int mainDiag = 0, secDiag = 0;
    int isUpper = 1, isLower = 1, isDiagonal = 1;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) mainDiag += mat[i][j];
            if(i + j == n - 1) secDiag += mat[i][j];

            if(i > j && mat[i][j] != 0) isUpper = 0;
            if(i < j && mat[i][j] != 0) isLower = 0;
            if(i != j && mat[i][j] != 0) isDiagonal = 0;
        }
    }

    printf("Main Diagonal Sum = %d\n", mainDiag);
    printf("Secondary Diagonal Sum = %d\n", secDiag);

    if(isDiagonal) printf("Matrix Type: Diagonal Matrix\n");
    else if(isUpper) printf("Matrix Type: Upper Triangular Matrix\n");
    else if(isLower) printf("Matrix Type: Lower Triangular Matrix\n");
    else printf("Matrix Type: None of these\n");

    return 0;
}