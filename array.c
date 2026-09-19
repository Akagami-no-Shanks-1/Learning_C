#include <stdio.h>

int main()
{
    while (1)
    {
        int func, column, row, number;

        printf(" Quit: 0\n Enter values and print a 2D matrix: 1\n Get multiplication Table: 2\n ");
        printf("Reverse an Array: 3\n Get 3 multiplication tables: 4\n ");
        printf("Choose funtion to perform: ");
        scanf("%d", &func);

        if (func == 0)
        {
            break;
        }

        switch (func)
        {
        case 1:
        {
            printf("Enter number of rows: ");
            scanf("%d", &row);
            printf("Enter number of columns: ");
            scanf("%d", &column);

            int matrix[row][column];

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    printf("Enter (%d,%d) value for matrix: ", i + 1, j + 1);
                    scanf("%d", &matrix[i][j]);
                }
            }
            printf("Here is your matrix:\n\n");
            for (int i = 0; i < row; i++)
            {
                printf("|  ");
                for (int j = 0; j < column; j++)
                {
                    printf("%-3d ", matrix[i][j]);
                }
                printf("|");
                printf("\n");
            }

            break;
        }

        case 2:
        {

            printf("Enter the table to print: ");
            scanf("%d", &number);
            int arr[10];

            for (int i = 1; i <= 10; i++)
            {
                arr[i - 1] = number * i;
                printf("%d * %2d = %2d\n", number, i, arr[i - 1]);
            }

            break;
        }

        case 3:
        {
            printf("Enter length of the array: ");
            scanf("%d", &number);

            int arr[number];
            int temp;

            for (int i = 0; i < number; i++)
            {
                printf("Enter value %d for array: ", i + 1);
                scanf("%d", &arr[i]);
            }

            for (int i = 0; i < number / 2; i++)
            {
                temp = arr[i];
                arr[i] = arr[(number - 1) - i];
                arr[(number - 1) - i] = temp;
            }

            printf("Here is reversed array : \n");

            for (int i = 0; i < number; i++)
            {
                printf("%d ", arr[i]);
            }
            break;
        }

        case 4:
        {
            int arr[3][10];
            int num[3];
            int *ptr_num = num;

            for (int i = 0; i < 3; i++)
            {
                printf("Enter a number to get it's table no. %d: ", i + 1);
                scanf("%d", &num[i]);
                for (int j = 1; j <= 10; j++)
                {
                    arr[i][j - 1] = *(ptr_num + i) * j;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    printf("%2d ", arr[i][j]);
                }
                printf("\n");
            }
        }
        }
    }
    return 0;
}