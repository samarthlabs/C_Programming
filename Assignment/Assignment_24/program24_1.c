#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////
//
// Function Name: striwrx
// Description: Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
// Input: String, Character
// Output: Character
// Author: Samarth Devram Shelke
// Date: 13/11/2026
//
///////////////////////////////////////////////////////////
// Input: "MarvellouS"
// Output: e
//////////////////////////////////////////////////////////

BOOL CnkChar(char *str, char ch)
{

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string: ");
    fgets(arr,sizeof(arr), stdin);

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = CnkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}