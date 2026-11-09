#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Pattern
// Description: Accept number of rows and number of columns from user and display below pattern
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 7/11/2026
//
//////////////////////////////////////////////
// Output: a     b      c      d     e
//         1     2      3      4     5
//         a     b      c      d     e
//         1     2      3      4     5
//////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a' ; j <= iCol; j++, ch++)
        {
            if(i%2 == 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
}