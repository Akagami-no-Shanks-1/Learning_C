#include <stdio.h>
/*Check if a number is prime or not*/

int main()
{
    int num;
    int count = 0;
    printf("Enter a number to check if it is prime or not: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("Number is not prime.\n");
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("Number is prime\n");
    }

    return 0;
}
