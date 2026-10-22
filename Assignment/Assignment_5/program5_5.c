#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CheckCharacterType
// Description: Identify Character Type
// Input: Character 
// Output: String
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////


void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit");
    }
    else 
    {
        printf("Special Character");
    }
}

int main() 
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);
    
    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}