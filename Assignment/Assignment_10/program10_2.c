#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: ReactArea
// Description: Write a program which accept width & height of rectangle from user and calsulater its area. (Area = Width * Height)
// Input: Float, Float
// Output: Double
// Author: Samarth Devram Shelke
// Date: 3/11/2026
//
//////////////////////////////////////////////

double ReactArea(float fWidth, float fHeight)
{   
    double dArea = 0.0;

    dArea  = fWidth * fHeight;

    return dArea;
}

int main() 
{

    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width");
    scanf("%f", &fValue1);

    printf("Enter height");
    scanf("%f", &fValue2);

    dRet = ReactArea(fValue1, fValue2);

    printf("%f",dRet);

    return EXIT_SUCCESS;
}