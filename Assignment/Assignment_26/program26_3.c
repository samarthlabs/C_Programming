#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.
// Input: Character
// Output: Character
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
/////////////////////////////////////////////////////////////////////
// Input: Q
// Output: Q    R    S     T     U     V      W      X      Y      Z
/////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        for(int i = ch; i <= 'Z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(int i = ch; i >= 'a'; i--)
        {
            printf("%c\t", i);
        }
    }
    else
    {
        return;
    }

    printf("\n");
}

int main()
{   
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}