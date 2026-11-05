#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////
//
// Function Name: main
// Description: Write a program which accept number from user and print that name 
// Input: Integer
// Output: Integer
// Author: Samarth Devram Shelke
// Date: 5/11/2026
//
//////////////////////////////////////////////

int main() 
{

    char Name[30];
    printf("Please enter full name ");
    scanf("%[^\n]", &Name);

    printf("Your name is %s", Name);

    return 0;
}