#include <stdio.h>

int main()
{
    int a;
    printf("Table Maker\n");
    printf("Enter a number to get it's table:");
    scanf("%d", &a);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
    return 0;
} // Version 1.0 of Table Maker. Homework of loop practice