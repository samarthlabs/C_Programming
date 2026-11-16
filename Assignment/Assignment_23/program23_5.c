#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: striwrx
// Description: Write a program which accept string from user and count number of white spaces. 
// Input: String
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 7/11/2026
//
///////////////////////////////////////////////////////////
// Input: "MarvellouS"
// Output: 0
//////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int i = 0;
    int iCnt = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
}