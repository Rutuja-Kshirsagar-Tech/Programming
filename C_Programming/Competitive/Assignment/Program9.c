// Accept two numbers from user and
// display first number in second number of times

// input : 12 5
// output : 12 12 12 12 12

// input : -2 3
// output: -2 -2 -2

// input : 21 -3
// output : 21 21 21


#include<stdio.h>

void Display(int iNo, int Frequency)
{
    int iCnt = 0;

    if(Frequency < 0)
    {
        Frequency = -Frequency;
    }

    for(iCnt = 1; iCnt <= Frequency; iCnt++)
    {
        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}