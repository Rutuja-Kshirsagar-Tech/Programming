// Write a program to print the multiplication table of a number

class Program80
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.printTable(5);
    }
}


class Logic
{
    int iCnt = 0;

    void printTable(int inum)
    {
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(inum * iCnt);
        }
    }
}