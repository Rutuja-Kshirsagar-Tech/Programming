// Write a code which accepts width & height of rectangle from user and
// calculate its area. 

// Input : 5.3  9.78
// Output: 51.834

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double Area = 0.0;

    Area = fWidth * fHeight;

    return Area;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("The Area of the rectangle is : %lf",dRet);

    return 0;
}