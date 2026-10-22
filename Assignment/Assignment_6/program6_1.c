#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CalculateElectricityBill
// Description: Calculate Electricity Bill
// Input: Integer
// Output: Float
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{   
    float fBill  = 0.0f;

    if(iUnits < 0) 
    {
        printf("invalid Input");
        return;
    }

    if(iUnits <= 100) 
    {
        fBill = iUnits * 5.0f;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else 
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
    }

    printf("Bill = %.2f\n", fBill);
}

int main() 
{

    int iUnits = 0;

    printf("Enter a number: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}