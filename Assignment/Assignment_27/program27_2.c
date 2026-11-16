#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////////////
//
// Function Name: CountSmall
// Description: Write a program which accept string from user and count number of small characters.
// Input: string
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
/////////////////////////////////////////////////////////////////////
// Input: "Marvellous"
// Output: 9
/////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{   
    char arr[20];
    int iRet = 0;

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d", iRet);
    return 0;
}