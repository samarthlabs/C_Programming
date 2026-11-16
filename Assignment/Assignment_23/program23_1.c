#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: striwrx
// Description: Write a program which accept string from user and convert it into lower case. 
// Input: String
// Output: String
// Author: Samarth Devram Shelke
// Date: 7/11/2026
//
///////////////////////////////////////////////////////////
// Input: "Marvellous Multi OS"
// Output: marvellous multi os
//////////////////////////////////////////////////////////

void striwrx(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main()
{
    char arr[0];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    striwrx(arr);

    printf("Modified string is %s", arr);

    return 0;
}