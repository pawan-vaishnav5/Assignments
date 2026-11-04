/* Assignment 15 - Question 3
 * Check whether two integers are equal.
 */
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEqual(int iNo1, int iNo2)
{
    return (iNo1 == iNo2) ? TRUE : FALSE;
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    printf("Please enter two numbers: ");
    if (scanf("%d %d", &iValue1, &iValue2) != 2)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }
    BOOL bRet = ChkEqual(iValue1, iValue2);
    printf("%s\n", bRet == TRUE ? "Equal" : "Not Equal");
    return 0;
}
