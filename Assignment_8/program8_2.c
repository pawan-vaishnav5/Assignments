/* Assignment 8 - Question 2
 * Print a single digit in words; ignore the sign as in the examples.
 */
#include <stdio.h>

void Display(int iNo)
{
    if (iNo < -9 || iNo > 9)
    {
        printf("Invalid Number\n");
        return;
    }
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    switch (iNo)
    {
        case 0: printf("Zero\n"); break;
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 4: printf("Four\n"); break;
        case 5: printf("Five\n"); break;
        case 6: printf("Six\n"); break;
        case 7: printf("Seven\n"); break;
        case 8: printf("Eight\n"); break;
        case 9: printf("Nine\n"); break;
    }
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
