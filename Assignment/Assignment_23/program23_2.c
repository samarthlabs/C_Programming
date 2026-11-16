#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: striwrx
// Description: Write a program which accept string from user and convert it into upper case. 
// Input: String
// Output: String
// Author: Samarth Devram Shelke
// Date: 7/11/2026
//
///////////////////////////////////////////////////////////
// Input: "Marellous Multi OS"
// Output: MARVELLOUS MULTI OS
//////////////////////////////////////////////////////////

void striwrx(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main()
{
    char arr[0];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    striwrx(arr);

    printf("Modified string is %s", arr);

    return 0;
}