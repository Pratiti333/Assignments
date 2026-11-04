#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of 1st matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if(r1 != r2 || c1 != c2) {
        printf("Error: Matrices have different orders. Addition not possible.\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], sum[r1][c1];

    printf("Enter 1st matrix elements:\n");
    for(int i=0; i<r1; i++) for(int j=0; j<c1; j++) scanf("%d", &a[i][j]);

    printf("Enter 2nd matrix elements:\n");
    for(int i=0; i<r2; i++) for(int j=0; j<c2; j++) scanf("%d", &b[i][j]);

    printf("Sum Matrix:\n");
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}