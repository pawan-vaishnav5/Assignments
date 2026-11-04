/* Assignment 9 - Question 2
 * Convert dollars at the fixed assignment rate of 70 rupees per dollar.
 * Therefore 3 dollars = 210 rupees (the printed 270 example is a typo).
 */
#include <stdio.h>
#include <limits.h>
#include <errno.h>

int DollarToINR(int iNo)
{
    long long iResult = (long long)iNo * 70;
    errno = 0;
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
    int iRet = 0;

    printf("Enter number of USD: ");
    if (scanf("%d", &iValue) != 1)
    {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }
    iRet = DollarToINR(iValue);
    if (errno == ERANGE)
    {
        fprintf(stderr, "Result is too large for the int return type.\n");
        return 1;
    }
    printf("Value in INR is %d\n", iRet);
    return 0;
}
