#include <stdio.h>

/* This is a program containing 6 loop practice problems. You can use any (for / while / do-while) loop for these
questions:

Q1. Sum of N numbers
Q2. Table generator
Q3. Sum of numbers in the table(final result)
Q4. Factorial of a number
Q5. Check if a number is prime or not
Q6. Print factors of a number*/

int main()
{
    // pre-defining variables to reuse them for different questions.
    while (1)
    {
        int number;
        int sum = 0;
        int product = 1;
        int choice;
        int isPrime = 1;

        printf(" quit: 0\n Sum of n numbers: 1\n Table generator: 2\n Sum of numbers in a table: 3\n Factorial of a number: 4\n Check if number is prime: 5\n Get factors of a number: 6\n");
        printf(" choose the funtion you want to operate: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting...\n");
            break;
        }

        switch (choice)
        {
        case 1: // First question solution.
            printf("Enter a number to calculate the sum of numbers from 1 to n: ");
            scanf("%d", &number);
            for (int i = 1; i <= number; i++)
            {
                sum += i;
            }
            printf("The sum till %d is %d\n", number, sum);
            break;

        case 2: // Second question solution.
            printf("Table Maker\n");
            printf("Enter a number to get it's table:");
            scanf("%d", &number);

            for (int i = 1; i <= 10; i++)
            {
                printf("%d * %d = %d\n", number, i, number * i);
            }
            break;

        case 3: // Third question solution.
            printf("Enter a number to get it's table and Sum of the table:");
            scanf("%d", &number);

            for (int i = 1; i <= 10; i++)
            {
                printf("%d * %d = %d\n", number, i, number * i);
                sum += number * i;
            }
            printf("the sum of the table is %d\n", sum);
            break;

        case 4: // Fourth question solution.
            printf("Enter a number to get it's factorial: ");
            scanf("%d", &number);
            for (int i = number; i > 1; i--)
            {
                product *= i;
            }
            printf("Factorial of %d = %d\n", number, product);
            break;

        case 5: // Fifth question solution.
        {
            printf("Enter a number to check if it is prime or not: ");
            scanf("%d", &number);

            if (number == 0 || number == 1)
            {
                isPrime = 0;
            }
            else
            {
                for (int i = 2; i < number; i++)
                {
                    if (number % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if (isPrime == 1)
            {
                printf("%d is a prime number\n", number);
            }
            else
            {
                printf("%d is not a prime number\n", number);
            }

            break;
        }

        case 6:
        { // Sixth question solution.
            printf("Enter a number to get its factors: ");
            scanf("%d", &number);

            if (number == 0)
            {
                printf("%d had no factors\n", number);
            }
            else if (number != 0)
            {
                printf("Factors of %d are :\n", number);
                for (int i = 1; i <= number; i++)
                {
                    if (number % i == 0)
                    {
                        printf(" %d\n", i);
                    }
                }
            }
            break;
        }
        }
    }
    return 0;
}