#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: Accept character from user and display its ASCII value in decimal octal and hexadecimal format.
// Input: Character
// Output: Integer, Octal, Hexadecimal
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
/////////////////////////////////////////////////////////////////////
// Input: %
// Output: TRUE
/////////////////////////////////////////////////////////////////////

void ChkSpecial(char ch)
{
    printf("%d\t%o\t%x\n", ch, ch, ch);
}

int main()
{   
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    ChkSpecial(cValue);


    return 0;
}