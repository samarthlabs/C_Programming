#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
//////////////////////////////////////////////////////////////////////
//
// Function Name: Difference
// Description: Write a program which accept string from user and display in in reverse order.
// Input: string
// Output: Boolean
// Author: Samarth Devram Shelke
// Date: 16/11/2026
//
/////////////////////////////////////////////////////////////////////
// Input: "MarvellouS"
// Output: "SuollevraM"
/////////////////////////////////////////////////////////////////////

void ChkVowel(char *str)
{
   char *start = str;
   char *end = str;
   char temp = '\0';

   while(*end != '\0')
   {
        end++;
   }
   end--;

   while(start < end)
   {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
   }

   printf("%s", str);
}

int main()
{   
    char arr[20];
    
    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    ChkVowel(arr);

    
    
    return 0;
}