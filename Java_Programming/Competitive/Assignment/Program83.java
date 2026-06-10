// Write a program to print all odd numbers up to N

class Program83
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.printOddNumbers(20);
    }
}


class Logic
{
    int iCnt = 0;

    void printOddNumbers(int inum)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= inum; iCnt++)
        {
            if((iCnt % 2) != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}