#include <stdio.h>

void address(int *ptr)
{
    printf("address of %d = %u\n", *ptr, ptr);
}
void Ten(int *ptr)
{
    *ptr = 10 * *ptr;
}
void sum_avg(int *ptr, int *ptr2)
{
    printf("The sum of %d and %d is %d\n", *ptr, *ptr2, *ptr + *ptr2);
    printf("The average of %d and %d is %.2f\n", *ptr, *ptr2, (*ptr + *ptr2) / 2.0);
}

int main()
{
    while (1)
    {
        int function;
        int a = 2, b, c, d;
        int *ptr_a = &a, *ptr_b = &b, *ptr_c = &c, *ptr_d = &d;
        printf(" quit: 0\n print address: 1\n 10 times value: 2\n sum and average: 3\n ");
        printf("Enter function : ");
        scanf("%d", &function);

        if (function == 0)
        {
            break;
        }

        switch (function)
        {
        case 1:
            printf("address of %d = %u\n", a, &a);
            address(ptr_a);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &b);
            Ten(ptr_b);
            printf("The value you entered was %d\n", *ptr_b);
            break;

        case 3:
            printf("Enter number 1: ");
            scanf("%d", &c);
            printf("Enter number 2: ");
            scanf("%d", &d);

            sum_avg(ptr_c, ptr_d);
            break;
        }
    }
    return 0;
}
