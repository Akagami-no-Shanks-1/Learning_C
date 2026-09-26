#include <stdio.h>
/*Factorial of a number*/
int main()
{
    long int n, fact;
    printf("enter any number to get it's factorial \n");
    scanf("%ld", &n);
    fact = n;

    if (n == 0)
    {
        printf("The factorial of 0 = 1\n");
    }
    else if (n < 0)
    {
        printf("Cannot find factorial of negative numbers\n");
    }
    else
    {

        for (int i = 1; i <= n - 1; i++)
        {
            fact = fact * (n - i);
        }
        printf("Factorial of %ld = %ld", n, fact);
    }

    return 0;
}
