#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: DisplayASCII
// Description: Write a program which display ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
// Input: Decimal Hexadecimal Octal Symbol
// Output: Decimal Hexadecimal Octal Symbol
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
///////////////////////////////////////////////////////////
// Input: Decimal Hexadecimal Octal Symbol
// Output: Decimal Hexadecimal Octal Symbol
//////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;

    printf("\n");
    printf("Decimal\tHexadecimal\tOctal\tSymbol\n");
    printf("------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%x\t%o\t%c",i ,i ,i ,i);

        if(i >= 32 && i <= 126)
        {
            printf("%c", i);
        }
        else
        {
            printf(".");
        }

        printf("\n");
    }
}

int main()
{

    DisplayASCII();

    return 0;
}