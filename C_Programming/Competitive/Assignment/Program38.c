// Write a program which accepts distance in kilometers and 
// convert it into meters 

// Input : 5
// Output: 5000

// Input : 12
// Output: 12000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    iNo = iNo * 1000;

    return iNo;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in KM : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is : %d",iRet);

    return 0;
}