#include <stdio.h>

int main() {
    int n, elem, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to insert and position (0 to %d): ", n);
    scanf("%d %d", &elem, &pos);

    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
        for(int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = elem;
        n++;

        printf("Updated array: ");
        for(int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}