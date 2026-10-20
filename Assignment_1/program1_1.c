#include<stdio.h>
#include<stdlib.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if((iNo2 / iNo1) == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter 1st number : \n");
    scanf("%d",&iValue1);

    printf("Enter 2st number : \n");
    scanf("%d",&iValue2);
    
    iRet = Divide(iValue1, iValue2);

    printf("Division is %d", iRet);
    
    return EXIT_SUCCESS;
}
