// Write a program to calculate the product of digits of a number

class Program96
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.productOfDigits(234);
    }
}

class Logic
{
    void productOfDigits(int num)
    {
        int iDigit = 0;
        int iProduct = 0;

        iProduct = 1;
        
        while(num != 0)
        {
            iDigit = num % 10;

            iProduct = iProduct * iDigit;

            num = num / 10;
        }

        System.out.println("The product of digits is : "+ iProduct);
    }
}