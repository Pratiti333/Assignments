#include <stdio.h>

void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int element, int pos) {
    if (pos < 0 || pos > *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*size)++;
    printf("Element inserted successfully.\n");
}

int deleteElement(int arr[], int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Invalid position!\n");
        return -1;
    }
    int deletedValue = arr[pos];
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    return deletedValue;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5, choice, pos, val;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Display Array\n2. Insert Element\n3. Delete Element\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2:
                printf("Enter value and index position: ");
                scanf("%d %d", &val, &pos);
                insertElement(arr, &size, val, pos);
                break;
            case 3:
                printf("Enter index position to delete: ");
                scanf("%d", &pos);
                val = deleteElement(arr, &size, pos);
                if (val != -1) printf("Deleted Value: %d\n", val);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}