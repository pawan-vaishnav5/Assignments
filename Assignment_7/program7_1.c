/* Assignment 7 - Question 1
 * Print the pair $ * |N| times (negative N uses its magnitude).
 */

#include <stdio.h>

void Pattern(int iNo)
{
    long long iCount = iNo;
    if (iCount < 0)
    {
        iCount = -iCount;
    }

    for (long long iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("$ * ");
    }
    printf("\n");
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

    Pattern(iValue);
    return 0;
}
