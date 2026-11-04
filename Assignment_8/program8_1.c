/* Assignment 8 - Question 1
 * Classify N as Small, Medium or Large.
 * Boundary convention: 50 is Medium and 100 is Large.
 */
#include <stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }
    Number(iValue);
    return 0;
}
