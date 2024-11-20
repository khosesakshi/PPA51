class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("inside Base constructor");
    }
    public void fun()
    {
        System.out.println("inside base fun");
    }
}

class Derived extends Base
{
    public int X,Y;

    public Derived()
    {
        System.out.println("inside Derived constructor");
    }
    public void gun()
    {
        System.out.println("inside Derived gun");
    }

}
class Singlelevel
{
    public static void main(String a[])
    {
        System.out.println("inside main method");
        Derived dobj=new Derived();

        dobj.fun();
        dobj.gun();
    }
}