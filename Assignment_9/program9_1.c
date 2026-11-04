/* Assignment 9 - Question 1
 * Print |N| stars followed by |N| hash symbols.
 */
#include <stdio.h>

void Display(int iNo)
{
    long long iNumber = iNo;
    if (iNumber < 0)
    {
        iNumber = -iNumber;
    }

    for (long long iCnt = 0; iCnt < iNumber; iCnt++)
    {
        printf("* ");
    }
    for (long long iCnt = 0; iCnt < iNumber; iCnt++)
    {
        printf("# ");
    }
    printf("\n");
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
    Display(iValue);
    return 0;
}
