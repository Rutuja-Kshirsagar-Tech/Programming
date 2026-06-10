// Write a program which accept number from user and display below pattern

// Input :  5
// Output:  * * * * * # # # # # 

// Input :  6
// Output:  * * * * * * # # # # # #

// Input :  -5
// Output:   * * * * * # # # # #

// Input :  2
// Output:   * * # #

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 2*iNo; iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}