#include <stdio.h>

int main() {
    int n, arr[100], i, count = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Students who scored 99 are at positions: ");
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("%d ", i + 1);
            count++;
        }
    }

    if (count > 0)
        printf("\nTotal students who scored 99: %d", count);
    else
        printf("\nNo student scored 99");

    return 0;
}
