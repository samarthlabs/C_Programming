#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Display
// Description: Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital. In other cases display as it is.
// Input: Character
// Output: Character
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
///////////////////////////////////////////////////////////
// Input: Q
// Output: q
//////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    printf("Output: %c\n", ch);

}

int main()
{   
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}