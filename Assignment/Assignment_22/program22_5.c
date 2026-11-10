#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Pattern
// Description: Accept number from user and display below pattern. 
// Input: Integer
// Output: Integer, Spacial Character
// Author: Samarth Devram Shelke
// Date: 7/11/2026
//
///////////////////////////////////////////////////////////
// Output: #   1   *   #    2  *   #    3  *   #    4    *    #    5   *    #
//////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;
    

    for(i = 1; i <= iNo; i++)
    {   
        printf("%d\t", i * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements ");
    scanf("%d", &iValue);

    Pattern(iValue);
}