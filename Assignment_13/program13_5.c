/* Assignment 13 - Question 5
 * Return sum of even digits minus sum of odd digits; ignore the sign.
 */
#include <stdio.h>

int CountDiff(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    int iEvenSum = 0, iOddSum = 0;
    do
    {
        int iDigit = (int)(iNumber % 10);
        if (iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }
        iNumber /= 10;
    } while (iNumber != 0);
    return iEvenSum - iOddSum;
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
    int iRet = CountDiff(iValue);
    printf("%d\n", iRet);
    return 0;
}
