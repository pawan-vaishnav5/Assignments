/* Assignment 13 - Question 4
 * Multiply nonzero digits, following the examples; ignore the sign.
 * For input zero, return zero.
 */
#include <stdio.h>

int MultDigits(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }
    int iProduct = 1;
    if (iNumber == 0)
    {
        return 0;
    }
    while (iNumber != 0)
    {
        int iDigit = (int)(iNumber % 10);
        if (iDigit != 0)
        {
            iProduct *= iDigit;
        }
        iNumber /= 10;
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
    int iRet = MultDigits(iValue);
    printf("%d\n", iRet);
    return 0;
}
