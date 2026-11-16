#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: striwrx
// Description: Write a program which accept string from user and toggle the case.
// Input: String
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 7/11/2026
//
///////////////////////////////////////////////////////////
// Input: "Marvellous Multi OS"
// Output: mARVELLUS mULTI os
//////////////////////////////////////////////////////////

void strtongglex(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {  
            str[i] = str[i] - 32;
        } 
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("Modified string is %s", str);
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n]s", arr);

    strtongglex(arr);

    return 0;
}