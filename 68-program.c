#include <stdio.h>

void updateArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * 2;   // doubling each element
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Before update: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    updateArray(arr, 5);

    printf("\nAfter update: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
