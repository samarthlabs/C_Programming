#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: CheckTriangle
// Description: Check Triangle Validity
// Input: Float
// Output: Float
// Author: Samarth Devram Shelke
// Date: 20/10/2026
//
//////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{   
   if((iSide1 <= 0) || (iSide2 <= 0) || (iSide3 <= 0)) 
   {
        printf("Invalid Triangle\n");
        return;
   }
    else if((iSide1 + iSide2 > iSide3) && (iSide1 + iSide3 > iSide2) && (iSide2 + iSide3 > iSide1)) 
   {
        printf("Valid Triangle\n");
   }
   else
   {
        printf("Invalid Triangle\n");
   }
   
}

int main() 
{
    
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter purchase amount: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);
    

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}