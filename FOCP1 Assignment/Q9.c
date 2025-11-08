#include <stdio.h>

int main() {
    int n, i, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("First occurrence of 99 is at position %d", i + 1);
            return 0;
        }
    }

    printf("99 not found in array");
    return 0;
}
