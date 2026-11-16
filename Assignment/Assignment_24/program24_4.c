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
// Input: "Marvellous Multi OS" M
// Output: 11
//////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iPos = -1;
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iPos = i;
        }
        i++;
    }

    return iPos;
    
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

     printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character loction is %d", iRet);

    return 0;
}