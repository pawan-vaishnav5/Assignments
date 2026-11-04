/* Assignment 8 - Question 3
 * Find the factorial of |N|. Zero factorial is 1.
 * Return -1 if the result cannot fit in the assignment's int return type.
 */
#include <stdio.h>
#include <limits.h>

int Factorial(int iNo)
{
    long long iNumber = iNo;
    int iFact = 1;

    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for (long long iCnt = 2; iCnt <= iNumber; iCnt++)
    {
        if (iCnt > INT_MAX || iFact > INT_MAX / iCnt)
        {
            return -1;
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

    iRet = Factorial(iValue);
    if (iRet == -1)
    {
        fprintf(stderr, "Factorial is too large for the int return type.\n");
        return 1;
    }
    printf("Factorial of number is %d\n", iRet);
    return 0;
}
