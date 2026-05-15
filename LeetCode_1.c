#include <stdio.h>

int main()
{
    int number, target;
    printf("Enter the length of array: ");
    scanf("%d", &number);

    int array[number];
    int *ptr_arr = array;

    for (int i = 0; i < number; i++)
    {
        printf("Enter %dth array element (from 1 to %d)", i + 1, number);
        scanf("%d", &array[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);

    for (int j = 0; j < number; j++)
    {
        for (int i = 1; i < number - j; i++)
        {
            if (*(ptr_arr) + *(ptr_arr + i) == target)
            {
                printf(" %d, %d ", j, j + i);
            }
        }
        ptr_arr++;
    }
}