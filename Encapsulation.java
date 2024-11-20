class Arithematic
{
    public int no1;
    public int no2;

    public Arithematic()
    {
        System.out.println("inside default constructor");
        this.no1=0;
        this.no2=0;
    }

    public Arithematic(int A,int B)
    {
        System.out.println("inside paramitrised constructor");
        this.no1=A;
        this.no2=B;
    }

    public int Addition()
    {
        int Ans=0;
        Ans=this.no1+this.no2;
        return Ans;
    }

    public int Substraction()
    {
        int Ans=0;
        Ans=this.no1-this.no2;
        return Ans;
    }
}
class Encapsulation
{
    public static void main(String Arr[])
    {
        System.out.println("inside main function");

        Arithematic aobj1= new Arithematic();
        Arithematic aobj2= new Arithematic(11,10);

        int Ret=0;

        Ret=aobj2.Addition();
        System.out.println("Addition is:"+Ret);

        Ret=aobj2.Substraction();
        System.out.println("Substraction is:"+Ret);
    }
}