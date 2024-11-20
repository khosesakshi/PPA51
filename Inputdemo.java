import java.util.*;
class Inputdemo
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        
        int no1,no2,ans=0;

        System.out.println("enter first number");
        no1=sobj.nextInt();
            
        System.out.println("enter second number");
        no2=sobj.nextInt();

        ans=no1+no2;

        System.out.println("addition is:"+ans);

    }
}


/*
 data type              method from scanner class

 boolean                nextBoolean()
 byte                   nextByte()
 int                    nextInt()
 float                  nextFloat()
 double                 nextDouble()
 short                  nextShort()
 long                   nextLong()
 string                 nextLine()
 
 */