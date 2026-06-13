// Write a program to count how many even and odd numbers are present between 1 and N

class Program97
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.countEvenOddRange(50);
    }
}

class Logic
{
    void countEvenOddRange(int num)
    {
        int iCnt = 0;
        int iCountEven = 0;
        int iCountOdd = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }

        System.out.println("Count of even numbers is : " + iCountEven);
        System.out.println("Count of odd numbers is : " + iCountOdd);    
    }
}