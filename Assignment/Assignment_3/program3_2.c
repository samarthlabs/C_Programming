#include<stdio.h>

//////////////////////////////////////////////
//
// Function Name: DisplayFactor
// Description: Program which accept one number from user and print event factors of that number
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
        return;
    }

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo%i == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main() {

    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}