/* Assignment 7 - Question 3
 * Print the number line from -|N| through |N|, including zero.
 */

#include <stdio.h>

void Display(int iNo)
{
    long long iLimit = iNo;
    if (iLimit < 0)
    {
        iLimit = -iLimit;
    }

    for (long long iCnt = -iLimit; iCnt <= iLimit; iCnt++)
    {
        printf("%lld ", iCnt);
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

    Display(iValue);
    return 0;
}
