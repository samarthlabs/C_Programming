#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////
//
// Function Name: Difference
// Description: Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
// Input: string
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
/////////////////////////////////////////////////////////////////////
// Input: "MarvellouS"
// Output: 6  (8-2)
/////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCapitalCnt = 0, iSmallCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmallCnt++;
        }
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapitalCnt++;
        }

        str++;
    }

    return iSmallCnt - iCapitalCnt;
}

int main()
{   
    char arr[20];
    int iRet = 0;

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d", iRet);
    return 0;
}