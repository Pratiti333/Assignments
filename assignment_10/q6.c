#include <stdio.h>

void maxCount(int a[], int n, int i, int *m, int *c) {
    if (i == n) return;
    if (a[i] > *m) {
        *m = a[i];
        *c = 1;
    } else if (a[i] == *m) {
        (*c)++;
    }
    maxCount(a, n, i + 1, m, c);
}

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    int m = a[0], c = 0;
    maxCount(a, n, 0, &m, &c);
    printf("Max = %d, Count = %d\n", m, c);
    return 0;
}