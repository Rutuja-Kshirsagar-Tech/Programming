// 4. Write a program which accepts temperature in Fahrenheit and
// convert it into celcius. (1 celcius = (Farenhite -32) *(5/9))

// Input : 10
// Output: -12.2222

// Input : 34
// Output: 1.1111

#include<stdio.h>

double FhtoCs(float Temp)
{
    double dCsTemp = 0.0;

    dCsTemp = (Temp - 32)*(5.0/9.0);

    return dCsTemp;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celcius is : %lf",dRet);

    return 0;
}