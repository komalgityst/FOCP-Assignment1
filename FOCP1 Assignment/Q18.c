#include <stdio.h>

int main() {
    int arr[100], n, i, j, count, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j] && arr[i] != -1) {
                count++;
                arr[j] = -1;
            }
        }
        if (count > 1 && arr[i] != -1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    return 0;
}
