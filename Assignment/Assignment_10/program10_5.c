#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: SquareMeter
// Description: Write a program which accept area in square area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)
// Input: Integer
// Output: Double
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

double SquareMeter(int iValue)
{   
    double dSqr = 0.0;

    dSqr = iValue * 0.0929;

    return dSqr;
}

int main() 
{

    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Square Feet ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square meter: %lf\n", dRet);

    return EXIT_SUCCESS;
}