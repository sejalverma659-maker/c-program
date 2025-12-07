#include <stdio.h>
int main() {
    int arr[] = {2, 5, 1, 3, 7};
    int n = 5;
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}
