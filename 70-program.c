#include <stdio.h>

int main() {
    int arr[100], n;

    // Reading number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Reading array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing array elements
    printf("The array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
