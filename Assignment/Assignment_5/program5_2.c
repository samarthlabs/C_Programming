#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CheckLeapYear
// Description: Check Leap Year
// Input: Integer
// Output: String
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void CheckLeapYear(int iYear)
{   
    if(iYear <= 0) 
    {
        printf("invalid input");
        return;
    }
    
    if(iYear%400 == 0) 
    {
        printf("Leap Year");
    }
    else if(iYear%100 == 0)
    {
        printf("Not a Leap Year");
    }
    else if(iYear%4 == 0) 
    {
        printf("Leap Year");
    }
    else 
    {
        printf("Not a Leap Year");
    }

}

int main() 
{

    int iYear = 0;

    printf("Enter Year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}