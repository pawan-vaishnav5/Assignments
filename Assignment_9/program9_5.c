/* Assignment 9 - Question 5
 * Return the even factorial minus the odd factorial of |N|.
 * Empty products are 1. Overflow is reported through errno.
 */
#include <stdio.h>
#include <limits.h>
#include <errno.h>

int FactorialDiff(int iNo)
{
    long long iNumber = iNo;
    int iEven = 1;
    int iOdd = 1;
    errno = 0;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    for (long long iCnt = 1; iCnt <= iNumber; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            if (iCnt > INT_MAX || iEven > INT_MAX / iCnt)
            {
                errno = ERANGE;
                return 0;
            }
            iEven *= (int)iCnt;
        }
        else
        {
            if (iCnt > INT_MAX || iOdd > INT_MAX / iCnt)
            {
                errno = ERANGE;
                return 0;
            }
            iOdd *= (int)iCnt;
        }
    }
    return iEven - iOdd;
}

int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }
    iRet = FactorialDiff(iValue);
    if (errno == ERANGE)
    {
        fprintf(stderr, "Result is too large for the int return type.\n");
        return 1;
    }
    printf("Factorial difference is %d\n", iRet);
    return 0;
}
