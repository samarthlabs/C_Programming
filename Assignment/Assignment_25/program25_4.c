#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////
//
// Function Name: ChkSmall
// Description: Accept Character from user and check whether it is small case or not (a-z).
// Input: Character
// Output: Boolean
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
///////////////////////////////////////////////////////////
// Input: g
// Output: TRUE
//////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{ 
    if(ch >= 'a' && ch <= 'z')
    {
        return TRUE;
    }
    else if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}