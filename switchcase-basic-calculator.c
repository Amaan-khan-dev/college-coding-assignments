#include <stdio.h>
int main() {
	int a, b;
    char op;   // op = operator

    printf("Enter 1st Number: ");
    scanf("%d", &a);

    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {

        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0) {
                printf("Result = %d", a / b);
            } else {
                printf("Division by Zero Not Allowed");
            }
            break;

        default:
            printf("Invalid Operator");
    }
    return 0;
}

