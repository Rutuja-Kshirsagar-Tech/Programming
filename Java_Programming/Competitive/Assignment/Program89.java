// Write a program to print each digit of a number separately

class Program89
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.printDigits(9876);
    }
}

class Logic
{
    void printDigits(int inum)
    {
        int iDigit = 0;

        while(inum != 0)
        {
            iDigit = inum % 10;

            System.out.println(iDigit);

            inum = inum / 10;
        }
    }
}