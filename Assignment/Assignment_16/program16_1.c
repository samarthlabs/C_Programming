#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Pattern
// Description: Accept number of rows and number of columns from user and display below pattern
// Input: Integer
// Output: Char
// Author: Samarth Devram Shelke
// Date: 7/11/2026
//
//////////////////////////////////////////////
// Output: A    B    C    D
//         A    B    C    D
//         A    B    C    D
//         A    B    C    D
//////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("ENter number of rows and columns ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
}