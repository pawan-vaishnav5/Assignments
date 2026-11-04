/* Assignment 11 - Question 4
 * Return the sum of even integers in an inclusive positive range.
 * Return -1 for an invalid range and -2 if the sum exceeds INT_MAX.
 */
#include <stdio.h>
#include <limits.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    if (iStart <= 0 || iEnd <= 0 || iStart > iEnd)
    {
        return -1;
    }
    for (long long iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            continue;
        }
        if (iSum > INT_MAX - iCnt)
        {
            return -2;
        }
        iSum += (int)iCnt;
    }
    return iSum;
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point: ");
    if (scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }
    printf("Enter ending point: ");
    if (scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    iRet = RangeSumEven(iValue1, iValue2);
    if (iRet == -1)
    {
        printf("Invalid range\n");
    }
    else if (iRet == -2)
    {
        fprintf(stderr, "Sum is too large for the int return type.\n");
        return 1;
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }
    return 0;
}
