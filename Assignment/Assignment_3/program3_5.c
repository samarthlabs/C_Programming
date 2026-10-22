#include<stdio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0
//////////////////////////////////////////////
//
// Function Name: ChkVowel
// Description: Program which accept character from user and check whether that character is vowel or not
// Input: Character
// Output: Boolean
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

BOOL ChkVowel(char CValue)
{
    if((CValue == 'a') || (CValue == 'e') || (CValue == 'i') || 
        (CValue == 'o') || (CValue == 'u') || 
        (CValue == 'A') || (CValue == 'E') || (CValue == 'I') || 
        (CValue == 'O') || (CValue == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main() {

    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}