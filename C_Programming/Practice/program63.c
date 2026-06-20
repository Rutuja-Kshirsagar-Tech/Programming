// Input : 5
// Output : -5 -3 -1 

#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt = -iNo; iCnt <= 0; iCnt = iCnt + 2)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}