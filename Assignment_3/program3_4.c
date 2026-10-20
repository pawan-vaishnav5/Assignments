#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }

    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = 0;

    printf("Enter a character : \n");
    scanf("%c",%cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}