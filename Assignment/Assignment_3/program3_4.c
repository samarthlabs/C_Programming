#include<stdio.h>

//////////////////////////////////////////////
//
// Function Name: DisplayConvert
// Description: Program which accept one character from user and covert case of that character
// Input: Character
// Output: Character
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z') 
    {
        printf("%c", CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }   
}

int main() {

    char cValue = 0;

    printf("Enter Character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}