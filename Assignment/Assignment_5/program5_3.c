#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: DisplayGrade
// Description: Calculate Student Grade
// Input: Float
// Output: String
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void DisplayGrade(float fMarks)
{   
   if(fMarks < 0 || fMarks > 100) 
   {
        printf("Invalid Marks");
        return;
   }
   else if(fMarks >= 90) 
   {
        printf("Grade A");
   }
   else if(fMarks >= 75)
   {
        printf("Grade B");
   }
   else if(fMarks >= 60)
   {
        printf("Grade C");
   }
   else if(fMarks >= 40)
   {
        printf("Grade D");
   }
   else
   {
        printf("Fail");
   }
}

int main() 
{

    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}