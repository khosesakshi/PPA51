class Base
{
    public int A,B;

    
    public void fun()
    {
        System.out.println("inside base fun");
    }
    public void gun()
    {
        System.out.println("inside base gun");
    }
    public void sun()
    {
        System.out.println("inside base sun");
    }
    public void run()
    {
        System.out.println("inside base run");
    }
}

class Derived extends Base
{
    public int X,Y;

    public void fun()
    {
        System.out.println("inside Derived fun");
    }
    public void sun()
    {
        System.out.println("inside Derived sun");
    }
    public void mun()
    {
        System.out.println("inside Derived mun");
    }
    public void bun()
    {
        System.out.println("inside Derived bun");
    }

}
class RMD
{
    public static void main(String a[])
    {
        Base bobj=new Derived();          //upcasting
        //Base bobj=new Base();          nocasting
        //Derived dobj=new Derived();    nocasting
        //Base bobj=new Derived();       upcasting
        //Derived dobjb=new Base();       down casting
    
            bobj.fun();       //derived fun
            bobj.gun();       //base gun
            bobj.sun();       //derived sun
            bobj.run();       //base run  
            //bobj.mun();       //error
            //bobj.bun();       //error
    }
}