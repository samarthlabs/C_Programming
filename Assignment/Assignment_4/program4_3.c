#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: FindGreater
// Description: Find the Greater of Two Number
// Input: Integer, Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void FindGreater(int iValue1, int iValue2)
{
    if(iValue1 > iValue2)
    {
        printf("%d is Greater", iValue1);
    }
    else if(iValue1 < iValue2) 
    {
        printf("%d is Greater", iValue2);
    } else {
        printf("%d Both Numbers Are Equal", iValue1);
    }
}

int main() 
{

    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two number: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}