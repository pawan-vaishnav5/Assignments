/* Assignment 13 - Question 1
 * Count even digits, including zero. Ignore the sign.
 * Zero is treated as a single digit.
 */
#include <stdio.h>

int CountEven(int iNo)
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
        if (iDigit % 2 == 0)
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
    int iRet = CountEven(iValue);
    printf("%d\n", iRet);
    return 0;
}
