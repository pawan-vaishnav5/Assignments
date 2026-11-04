/* Assignment 14 - Question 3
 * Display positive non-factors less than the number. Use the magnitude of negative inputs.
 */
#include <stdio.h>

void NonFact(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    for (long long iCnt = 1; iCnt < iNumber; iCnt++)
    {
        if (iNumber % iCnt != 0)
        {
            printf("%lld ", iCnt);
        }
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
    if (iValue == 0)
    {
        fprintf(stderr, "Invalid number. Zero has no finite list of factors.\n");
        return 1;
    }
    NonFact(iValue);
    return 0;
}
