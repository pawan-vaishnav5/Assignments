/* Assignment 9 - Question 4
 * Multiply all odd positive integers up to |N|.
 * An empty product is 1. Overflow is reported through errno.
 */
#include <stdio.h>
#include <limits.h>
#include <errno.h>

int OddFactorial(int iNo)
{
    long long iNumber = iNo;
    int iFact = 1;
    errno = 0;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    for (long long iCnt = 1; iCnt <= iNumber; iCnt += 2)
    {
        if (iCnt > INT_MAX || iFact > INT_MAX / iCnt)
        {
            errno = ERANGE;
            return 0;
        }
        iFact *= (int)iCnt;
    }
    return iFact;
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
    iRet = OddFactorial(iValue);
    if (errno == ERANGE)
    {
        fprintf(stderr, "Result is too large for the int return type.\n");
        return 1;
    }
    printf("Odd Factorial of number is %d\n", iRet);
    return 0;
}
