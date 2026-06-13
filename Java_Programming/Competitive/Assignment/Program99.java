// Write a program to count total number of factors of a given number

class Program99
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.countFactors(20);
    }
}

class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 1; iCnt <= num/2; iCnt++)
        {
            if((num % iCnt) == 0)
            {
                iCount++;
            }
        }

        System.out.println("Total count of factors is : " + iCount);
    }
}