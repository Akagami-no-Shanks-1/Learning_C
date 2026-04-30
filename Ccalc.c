#include <stdio.h>

int main()
{
    while (1)
    {
        int a, b;
        char op;

        printf("Enter an opertion (+,-,*,/ or q to quit):");
        scanf(" %c", &op); // Note the space before %c to consume any leftover whitespace

        if (op == 'q')
        {
            break;
        }
        if (op != '+' && op != '-' && op != '*' && op != '/')
        {
            printf("Invalid operator. Please try again.\n");
            continue;
        }
        printf("Enter number 1:");
        scanf("%d", &a);
        printf("Enter number 2:");
        scanf("%d", &b);

        switch (op)
        {
        case '+': // Addition
            printf("Sum of %d and %d = %d\n", a, b, a + b);
            break;
        case '-': // subtraction
            printf("difference of %d and %d = %d\n", a, b, a - b);
            break;
        case '*': // multiplication
            printf("product of %d and %d = %d\n", a, b, a * b);
            break;
        case '/': // division
            if (b != 0)
            {
                printf("quotient of %d and %d = %f\n", a, b, (float)a / b);
            }
            else
            {
                printf("Error: Cannot divide by zero.\n");
            }
            break;
        }
    }
    return 0;
} // This is Version 2.0 of calculator with switch function used.