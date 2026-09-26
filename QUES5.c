#include <stdio.h>

int main()
{
    int sum = 0, num, max, min;
    int array[num];

    printf("Enter the size of array: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter %dth element of the array: ", i + 1);
        scanf("%d", &array[i]);
    }
    max = array[0];
    min = array[0];

    for (int i = 0; i < num; i++)
    {
        sum = sum + array[i];
    }

    for (int i = 0; i < num; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("Sum of the array = %d\naverage of the array = %.2f\n", sum, (float)sum / (float)num);
    printf("max = %d\nmin = %d", max, min);

    return 0;
}
