#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CalculateBonus
// Description: Calculate Employee Bonus
// Input: Float
// Output: Float, Integer
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void CalasulateBouns(int fSalary, int iYears)
{   
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0) 
    {
        printf("Invaild Input\n");
        return;
    }

    if(iYears > 10) 
    {
        fBonus = fSalary * 0.15;
    }
    else if(iYears >= 5) 
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    printf("Bonus = %.2f", fBonus);

}

int main() 
{
    
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary And years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalasulateBouns(fSalary, iYears);

    return EXIT_SUCCESS;
}