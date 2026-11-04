/* Assignment 7 - Question 4
 * Print all positive odd integers up to and including N.
 * The sample for N = 18 omits 15 and 17; this follows the question text.
 * N <= 0 prints an empty line.
 */

#include <stdio.h>

void OddDisplay(int iNo)
{
    for (long long iCnt = 1; iCnt <= iNo; iCnt += 2)
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

    OddDisplay(iValue);
    return 0;
}
