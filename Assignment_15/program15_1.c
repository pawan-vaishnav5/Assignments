/* Assignment 15 - Question 1
 * Read and print a full name containing spaces (up to 29 characters).
 */
#include <stdio.h>
#include <string.h>


int main(void)
{
    char Name[30];
    printf("Please enter full name: ");
    if (fgets(Name, sizeof Name, stdin) == NULL)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    Name[strcspn(Name, "\r\n")] = '\0';
    printf("Your name is %s\n", Name);
    return 0;
}
