#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: Number
// Description: Write a program which accept number from user and if number is less than 50 then printf small, if it is greater than 50 and less than 100 then printf medium, if it is greater than 100 then print large.
// Input: Integer
// Output: String
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

void Number(int iNo)
{   
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main() 
{

    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}