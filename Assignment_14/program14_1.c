/* Assignment 14 - Question 1
 * Multiply proper positive factors (exclude the number itself).
 * Use the magnitude of negative inputs. The empty product for 1 is 1.
 */
#include <stdio.h>
#include <limits.h>
#include <errno.h>

int MultFact(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    int iProduct = 1;
    errno = 0;
    for (long long iCnt = 1; iCnt <= iNumber / 2; iCnt++)
    {
        if (iNumber % iCnt == 0)
        {
            if (iProduct > INT_MAX / iCnt)
            {
                errno = ERANGE;
                return 0;
            }
            iProduct *= (int)iCnt;
        }
    }
    return iProduct;
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
    int iRet = MultFact(iValue);
    if (errno == ERANGE)
    {
        fprintf(stderr, "Product is too large for int.\n");
        return 1;
    }
    printf("%d\n", iRet);
    return 0;
}
