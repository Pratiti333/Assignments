#include <stdio.h>
#include <limits.h>

void SecondLargest(int arr[], int i, int n, int *l, int *sl);

int main() {
    int n, sl, l;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Array size must be at least 2 to find a second largest element.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    l = INT_MIN;
    sl = INT_MIN;

    SecondLargest(arr, 0, n, &l, &sl);
    
    if (sl == INT_MIN) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("Largest: %d\n", l);
        printf("Second Largest: %d\n", sl);
    }

    return 0;
}

void SecondLargest(int arr[], int i, int n, int *l, int *sl) {
    if (i == n) {
        return;
    }
    
    if (arr[i] > *l) {
        *sl = *l;
        *l = arr[i];
    }
    else if (arr[i] > *sl && arr[i] != *l) {
        *sl = arr[i];
    }

    SecondLargest(arr, i + 1, n, l, sl);
}