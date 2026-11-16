#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////
//
// Function Name: ChkAlpha
// Description: Accept Character from user and check whether it is alphabet or not (A-Z a-z).
// Input: Character
// Output: Boolean
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
///////////////////////////////////////////////////////////
// Input: "F"
// Output: TRUE
//////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{ 
    if(ch >= 'A' && ch <= 'Z')
    {
        return TRUE;
    }
    else if(ch >= 'a' && ch <= 'z')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character ");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}