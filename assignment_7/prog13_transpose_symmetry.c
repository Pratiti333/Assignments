#include <stdio.h>

int main() {
    int n;
    printf("Enter order of square matrix (N): ");
    scanf("%d", &n);
    int mat[n][n], trans[n][n];

    printf("Enter matrix elements:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
            trans[j][i] = mat[i][j];
        }
    }

    printf("Transpose Matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) printf("%d\t", trans[i][j]);
        printf("\n");
    }

    int isSymmetric = 1, isSkew = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(mat[i][j] != trans[i][j]) isSymmetric = 0;
            if(mat[i][j] != -trans[i][j]) isSkew = 0;
        }
    }

    if(isSymmetric) printf("Matrix is Symmetric.\n");
    else if(isSkew) printf("Matrix is Skew-Symmetric.\n");
    else printf("Matrix is neither Symmetric nor Skew-Symmetric.\n");

    return 0;
}