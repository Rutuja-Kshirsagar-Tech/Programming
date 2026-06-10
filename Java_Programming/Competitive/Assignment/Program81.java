// Write a program to check whether a number is prime or not

class Program81
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.CheckPrime(11);
    }
}


class Logic
{
    int iCnt = 0;

    void CheckPrime(int inum)
    {
        iCnt = 0;

        for(iCnt = 2; iCnt <= inum/2; iCnt++)
        {
            if((inum % iCnt) == 0)
            {
                break;
            } 
        }

        if(iCnt <= inum/2)
        {
            System.out.println("Number is not prime");
        }
        else
        {
            System.out.println("Number is prime");
        }

    }
}