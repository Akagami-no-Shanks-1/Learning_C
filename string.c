#include <stdio.h>
#include <string.h>
/*1. String palindrome check
  2. Reverse degree of a string - 3498
  3. Invert the case (upper to lower and vice versa)*/
int main()
{
    char str[50], str2[50];

    printf("Enter your name : ");
    fgets(str, 50, stdin);
    str[strlen(str) - 1] = '\0';
    strcpy(str2, str);

    printf("%s length is %d including spaces\n", str, strlen(str));
    printf("Copied name is '%s'\n", str2);
    strcmp(str, str2) == 0 ? printf("string are same") : printf("string are different");
    return 0;
}
