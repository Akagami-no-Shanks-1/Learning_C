#include <stdio.h>
/*Reverse a number and find the sum of it's digits*/
int main()
{
    int n, rev = 0, catch, sum = 0;
    printf("Enter a number to find it's reverse: ");
    scanf("%d", &n);

    while (n != 0)
    {
        catch = n % 10;
        rev = rev * 10 + catch;
        n = n / 10;
        sum = sum + catch;
    }

    printf("Reversed number is %d\n", rev);
    printf("Sum of digits = %d", sum);

    return 0;
}
