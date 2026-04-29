#include <stdio.h>

int main()
{
    int a, b;
    char op;

    while (1)
    {
        printf("Enter an opertion (=,-,*,/ or q to quit):");
        scanf(" %c", &op); // Note the space before %c to consume any leftover whitespace

        if (op == 'q')
        {
            break;
        }
        printf("Enter number 1:");
        scanf("%d", &a);
        printf("Enter number 2:");
        scanf("%d", &b);

        if (op == '+')
        {
            printf("sum of %d and %d = %d\n", a, b, a + b);
        }
        if (op == '-')
        {
            printf("difference of %d and %d = %d\n", a, b, a - b);
        }
        if (op == '*')
        {
            printf("product of %d and %d = %d\n", a, b, a * b);
        }
        if (op == '/')
        {
            if (b == 0)
            {
                printf("Cannot divide by zero\n");
            }
            else
            {
                printf("quotient of %d and %d = %d\n", a, b, a / b);
            }
        }
        else
        {
            printf("Invalid operator\n");
        }
    }
    return 0;
}