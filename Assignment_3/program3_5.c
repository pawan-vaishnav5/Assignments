#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

bool CheckVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A'|| cValue == 'E'|| cValue == 'I'|| cValue == 'O'|| cValue == 'U')
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
    char cValue = 0;
    bool bRet = FALSE;

    printf("Enter a character : \n");
    scanf("%c",%cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("Vowel");
    }
    else
    {
        printf("Not Vowel");
    }

    return EXIT_SUCCESS;
}