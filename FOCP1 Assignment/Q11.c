#include <stdio.h>

int main() {
    int n, arr[100], even[100], odd[100];
    int i, e = 0, o = 0;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    printf("Enter scores: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    printf("Even scores: ");
    for (i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd scores: ");
    for (i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}
