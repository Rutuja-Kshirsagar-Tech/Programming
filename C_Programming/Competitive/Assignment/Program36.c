// Write a code which accepts radius of circle from user and
// calculate its area. Consider value of PI as 3.14 

// Input : 5.3
// Output: 88.2026

// Input : 10.4
// Output: 339.6224

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double Area = 0.0;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The Area of the circle is : %lf",dRet);

    return 0;
}