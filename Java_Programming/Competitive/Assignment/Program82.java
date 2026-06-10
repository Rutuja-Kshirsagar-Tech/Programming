// Write a program to print all even numbers up to N

class Program82
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.printEvenNumbers(20);
    }
}


class Logic
{
    int iCnt = 0;

    void printEvenNumbers(int inum)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= inum; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}