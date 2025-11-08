#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        int decimal = 0, i = 0, rem;
        printf("Enter binary number: ");
        scanf("%lld", &binary);
        while (binary != 0) {
            rem = binary % 10;
            binary /= 10;
            decimal += rem * pow(2, i);
            i++;
        }
        printf("Decimal = %d", decimal);
    } else if (choice == 2) {
        int decimal, i = 1, binary = 0;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);
        while (decimal != 0) {
            binary += (decimal % 2) * i;
            decimal /= 2;
            i *= 10;
        }
        printf("Binary = %d", binary);
    } else {
        printf("Invalid choice");
    }

    return 0;
}
