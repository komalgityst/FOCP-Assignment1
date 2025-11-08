#include <stdio.h>

int main() {
    int arr[100], n, pos, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (1 for front, %d for end): ", n);
    scanf("%d", &pos);

    printf("Before deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("\nAfter deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
