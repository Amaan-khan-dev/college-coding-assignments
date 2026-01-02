// 4. Given an input positive integer number, 
// display odd numbers from in the range [1,n]?
// Developed by Amaan Khan.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

