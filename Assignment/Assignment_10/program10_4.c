#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: FhtoCs
// Description: Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit - 32) * (5/9))
// Input: Float
// Output: Double
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

double FhtoCs(float fTemp)
{   
    double dCelsi = 0.0;

    dCelsi = (fTemp - 32) * (5.0 / 9.0);

    return dCelsi;
}

int main() 
{

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheits: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius %lf", dRet);

    return EXIT_SUCCESS;
}