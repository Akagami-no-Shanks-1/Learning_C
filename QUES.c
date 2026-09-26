#include <stdio.h>
/* Swapping 2 variables */
int main()
{
    int a, b;
    int c, d;
    printf("Enter 2 number to swap them");
    scanf("%d %d", &a, &b);
    getchar();

    printf("before swapping a = %d and b = %d\n", a, b);

    int swap = a;
    a = b;
    b = swap;

    printf("a = %d and b = %d\n", a, b);

    printf("Enter 2 numbers to swap them using different method");
    scanf("%d %d", &c, &d);

    printf("Before swapping c = %d and d = %d\n", c, d);

    c = c + d;
    d = c - d;
    c = c - d;

    printf("c = %d and d = %d\n", c, d);

    return 0;
}
