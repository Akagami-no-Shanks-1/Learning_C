#include <stdio.h>
/* Note : If you define AND EQUATE lower_case before taking input from the user then it will cause a compilation error */
int main()
{
    while (1)
    {
        char ch; // variable to store the input character

        printf("Enter a character:\n");
        scanf(" %c", &ch); // This stores the input character in the variable 'ch'

        int lower_case = ch; // This converts the character to its ASCII value and stores it in 'lower_case'

        printf("The ASCII value of %c is %d \n", ch, lower_case); // This prints the character and its ASCII value
        if (lower_case >= 97 && lower_case <= 122)                // check ASCII value for lower case letters (a-z)
        {
            printf("The character is lower case. \n"); // This checks if the ASCII value corresponds to a lower case letter (a-z)
            break;
        }
        else
        {
            printf("The character is not lower case. \n"); // This prints a message if the character is not a lower case letter
        }
    }
    return 0;
}
