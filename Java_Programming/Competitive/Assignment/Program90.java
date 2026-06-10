// Write a program to calculate the power of a number using loops

class Program90
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.calculatePower(2,5);
    }
}

class Logic
{
    void calculatePower(int base, int exp)
    {
        int iPower = 0;
        int iCnt = 0;

        iPower = 1;

        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            iPower = iPower * base;
        }

        System.out.println("The Number is : "+ iPower);
    } 
}