#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            printf("Addition = %.2f\n", a + b);
            break;

        case '-':
            printf("Subtraction = %.2f\n", a - b);
            break;

        case '*':
            printf("Multiplication = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Division = %.2f\n", a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}