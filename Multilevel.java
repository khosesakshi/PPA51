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
class DerivedX extends Derived
{
    public int P,Q;

        public DerivedX()
    {
        System.out.println("inside Derivedx constructor");
    }
    public void sun()
    {
        System.out.println("inside Derived sun");
    }
    
}
class Multilevel
{
    public static void main(String a[])
    {
        System.out.println("inside main method");
        DerivedX dobj=new DerivedX();

        dobj.fun();
        dobj.gun();
        dobj.sun();

    }
}