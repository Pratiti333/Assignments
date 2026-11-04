#include <stdio.h>
#include <limits.h>

void findExtremeDistinct(int arr[], int n, int *smallest, int *secondSmallest, int *greatest, int *secondGreatest, int *valid) {
    if (n < 2) {
        *valid = 0;
        return;
    }

    int min1 = INT_MAX, min2 = INT_MAX;
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }

        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (min2 == INT_MAX || max2 == INT_MIN) {
        *valid = 0;
    } else {
        *valid = 1;
        *smallest = min1;
        *secondSmallest = min2;
        *greatest = max1;
        *secondGreatest = max2;
    }
}

int main() {
    int arr[] = {12, 45, 12, 7, 89, 7, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s, ss, g, sg, valid;

    findExtremeDistinct(arr, n, &s, &ss, &g, &sg, &valid);

    if (valid) {
        printf("Smallest: %d\n", s);
        printf("Second Smallest: %d\n", ss);
        printf("Greatest: %d\n", g);
        printf("Second Greatest: %d\n", sg);
    } else {
        printf("Fewer than two distinct values exist in the array.\n");
    }
    return 0;
}