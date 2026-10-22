#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo) {
        if((iNo%5) == 0) {
            printf("The given number is Divisible");
        } else {
            printf("The given number is not Divisible");
        }
    }

int main() {

    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);


    return EXIT_SUCCESS;
}