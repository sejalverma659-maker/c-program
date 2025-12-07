#include <stdio.h>
int main() {
    int arr[] = {4, 3, 6, 2, 4, 1, 5, 9, 4, 1, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, count, duplicateCount = 0;
    int visited[100] = {0};

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        if(count > 1) {
            printf("%d is repeated %d times\n", arr[i], count);
            duplicateCount++;
        }
    }

    printf("\nTotal Duplicate Elements = %d\n", duplicateCount);

    return 0;
}
