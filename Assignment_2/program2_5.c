#include<stdio.h>
#include<stdlib.h>

#define TRUE = 1
#define FALSE = 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return EXIT_SUCCESS;
}