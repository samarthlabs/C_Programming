#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: striwrx
// Description: Write a program which accept string from user reverse that string in place.
// Input: String
// Output: String
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
///////////////////////////////////////////////////////////
// Input: "abcd"
// Output: dcba
//////////////////////////////////////////////////////////

void StrRevX(char *str)
{

    int iStart = 0;
    int iEnd = 0;
    char temp;

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
    
}

int main()
{
    char arr[20];
    

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}