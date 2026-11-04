/* Assignment 13 - Question 3
 * Count digits strictly between 3 and 7 (4, 5 and 6). Ignore the sign.
 * Zero is treated as a single digit.
 */
#include <stdio.h>

int CountRange(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    int iCount = 0;
    do
    {
        int iDigit = (int)(iNumber % 10);
        if (iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }
        iNumber /= 10;
    } while (iNumber != 0);
    return iCount;
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
    int iRet = CountRange(iValue);
    printf("%d\n", iRet);
    return 0;
}
