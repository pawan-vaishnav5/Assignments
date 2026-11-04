/* Assignment 14 - Question 5
 * Return sum of proper factors minus sum of non-factors.
 * Use the magnitude of negative inputs.
 */
#include <stdio.h>
#include <limits.h>
#include <errno.h>

int FactDiff(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    long long iFactorSum = 0;
    long long iTotal = iNumber * (iNumber - 1) / 2;
    errno = 0;

    /* Collect factor pairs up to the square root; exclude the number itself. */
    for (long long iCnt = 1; iCnt <= iNumber / iCnt; iCnt++)
    {
        if (iNumber % iCnt == 0)
        {
            long long iOther = iNumber / iCnt;
            if (iCnt < iNumber)
            {
                iFactorSum += iCnt;
            }
            if (iOther != iCnt && iOther < iNumber)
            {
                iFactorSum += iOther;
            }
        }
    }
    long long iResult = iFactorSum - (iTotal - iFactorSum);
    if (iResult > INT_MAX || iResult < INT_MIN)
    {
        errno = ERANGE;
        return 0;
    }
    return (int)iResult;
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
    int iRet = FactDiff(iValue);
    if (errno == ERANGE)
    {
        fprintf(stderr, "Result is too large for int.\n");
        return 1;
    }
    printf("%d\n", iRet);
    return 0;
}
