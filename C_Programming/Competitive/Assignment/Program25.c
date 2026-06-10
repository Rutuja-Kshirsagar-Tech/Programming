// Write a program which accepts N and
// prints first 5 multiples of N

// Input :  4
// Output:  4 8 12 16 20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt <= 5*iNo; iCnt++)
    {
        if((iCnt % iNo) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}