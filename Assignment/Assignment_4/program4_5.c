#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CheckDivisiblity
// Description: Check Divisiblity by 5
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void CheckDivisiblity(int iValue)
{   
    if(iValue % 5 == 0) 
    {
        printf("%d is Divisible by 5", iValue);
    }
    else 
    {
        printf("%d Not Divisible by 5", iValue);
    }
}

int main() 
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisiblity(iValue);

    return EXIT_SUCCESS;
}