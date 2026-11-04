#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of elements (>=2): ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array size must be at least 2.\n");
        return 0;
    }
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) { max2 = max1; max1 = arr[i]; }
        else if(arr[i] > max2 && arr[i] != max1) { max2 = arr[i]; }

        if(arr[i] < min1) { min2 = min1; min1 = arr[i]; }
        else if(arr[i] < min2 && arr[i] != min1) { min2 = arr[i]; }
    }

    printf("Largest: %d\nSecond Largest: %d\n", max1, max2);
    printf("Smallest: %d\nSecond Smallest: %d\n", min1, min2);
    return 0;
}