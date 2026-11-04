#include <stdio.h>

int binSearch(int a[], int l, int h, int key) {
    if (l > h) return -1;
    int m = l + (h - l) / 2;
    if (a[m] == key) return m;
    if (a[m] > key) return binSearch(a, l, m - 1, key);
    return binSearch(a, m + 1, h, key);
}

int main() {
    int n, i, key;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter number to search: ");
    scanf("%d", &key);
    int res = binSearch(a, 0, n - 1, key);
    printf("Found at index: %d\n", res);
    return 0;
}