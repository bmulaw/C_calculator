
#include <stdio.h>
#include "math.h"

int main() {
    float number1;
    float number2;
    char operator;

    do {
        printf("\nEnter a math problem: ");
        scanf("%f %c %f", &number1, &operator, &number2);

        switch (operator)
        {
            case '+':
                printf("Result: %.2f", add(number1,number2));
                break;

            case '-':
                printf("Result: %.2f", subtract(number1,number2));
                break;

            case '*':
                printf("Result: %.2f", multiply(number1,number2));
                break;

            case '/':
                printf("Result: %.2f", divide(number1,number2));
                break;

            case '^':
                printf("Result: %.2f", power(number1,number2));
                break;

            case '$':
                printf("Result: %.2f", recursivePower(number1,number2));
                break;

            default:
                break;
        }
        printf("\n");
    } while (1);
}
