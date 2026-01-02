//3. Given a positive integer value n (>= 0) display number, 	
//   square and cube of numbers from 1 to n in a tabular format?
// Developed by Amaan Khan(BCA FY).

#include <stdio.h>

int main() {
    int number, i;

    printf("Enter value for number for printing Square & Cube: ");
    scanf("%d", &number);

    printf("Number\tSquare\tCube\n");

    for (i = 1; i <= number; i++) {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }

    return 0;
}

