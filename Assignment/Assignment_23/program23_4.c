#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: striwrx
// Description: Write a program which accept string from user and display only digits from that string. 
// Input: String
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 7/11/2026
//
///////////////////////////////////////////////////////////
// Input: "Marve98llous121"
// Output: 89121
//////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c", str[i]);
        }
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}