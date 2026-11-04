/* Assignment 15 - Question 4
 * Multiply three integers, skipping zeros as in the examples.
 * Return zero if all three inputs are zero; report overflow through errno.
 */
#include <stdio.h>
#include <limits.h>
#include <errno.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iValues[3] = {iNo1, iNo2, iNo3};
    long long iProduct = 1;
    int iCount = 0;
    errno = 0;
    for (int iCnt = 0; iCnt < 3; iCnt++)
    {
        if (iValues[iCnt] != 0)
        {
            iProduct *= iValues[iCnt];
            if (iProduct > INT_MAX || iProduct < INT_MIN)
            {
                errno = ERANGE;
                return 0;
            }
            iCount++;
        }
    }
    return iCount == 0 ? 0 : (int)iProduct;
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    printf("Please enter three numbers: ");
    if (scanf("%d %d %d", &iValue1, &iValue2, &iValue3) != 3)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    int iRet = Multiply(iValue1, iValue2, iValue3);
    if (errno == ERANGE)
    {
        fprintf(stderr, "Product is too large for int.\n");
        return 1;
    }
    printf("%d\n", iRet);
    return 0;
}
