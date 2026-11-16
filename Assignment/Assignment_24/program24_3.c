#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////
//
// Function Name: striwrx
// Description: Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
// Input: String, Character
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 7/11/2026
//
///////////////////////////////////////////////////////////
// Input: "MarvellouS"
// Output: e
//////////////////////////////////////////////////////////

int CnkChar(char *str, char ch)
{
    int i = 0;

    while(str == '\0')
    {
        if(str == ch)
        {
            ch++;
        }
        i++;
    }
    return ch;
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter the character: ");
    scanf("%c",cValue);

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Character frequency is %d", iRet);

    return 0;
}