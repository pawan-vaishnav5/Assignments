#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        printf("Both are equal");
    } 
    else if(iNo1 > iNo2)
    {
        printf("%d is greater", iNo1);
    }
    else
    {
        printf("%d is greater", iNo2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}