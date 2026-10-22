#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2){

    float fans = 0.0f;

    // Type Casting 
    fans = ((float)iNo1 + (float)iNo2) / 2;

    return fans;

}

int main() {

    int iValue1 = 0, iValue2 = 0;
    float iResult = 0.0f;

    printf("Enter First Number: ");
    scanf("%d", &iValue1);

    printf("Enter Second Number: ");
    scanf("%d", &iValue2);

    iResult = Average(iValue1,iValue2);

    printf("The Average No: %f", iResult);

    return EXIT_SUCCESS;
}
