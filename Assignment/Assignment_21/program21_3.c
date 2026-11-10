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
// Output: 5     4     3     2     1 
//         5     4     3     2     1
//         5     4     3     2     1
//////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {   
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", j);
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