#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CircleArea
// Description: Write a program which accept radius of circle from user and calculate its area. consider value PI as 3.14.(Area = PI * Radius * Radius)
// Input: Float
// Output: Double
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

double CirleArea(float fRadius)
{   
    double dArea = 0.0;

    dArea  = 3.14 * fRadius * fRadius;

    return dArea;
}

int main() 
{

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter number: ");
    scanf("%f", &fValue);

    dRet = CirleArea(fValue);

    printf("The Area of circle is %.4f\n", dRet);

    return EXIT_SUCCESS;
}