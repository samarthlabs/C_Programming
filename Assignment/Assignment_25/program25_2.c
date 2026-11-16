#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////
//
// Function Name: ChkCapital
// Description: Accept Character from user and check whether it is capital or not (A-Z).
// Input: Character
// Output: Boolean
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
///////////////////////////////////////////////////////////
// Input: "abcd"
// Output: dcba
//////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{ 
    if(ch >= 'A' && ch <= 'Z')
    {
        return TRUE;
    }
    else if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkCapital(cValue);

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