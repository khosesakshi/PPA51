class demo
{
    public demo()
    {
        System.out.println("inside constructor:");
    }
    protected void finalize()
    {
        System.out.println("Inside finalize method:");
    }
}

class Objectdemo3
{
    public static void main(String A[])
    {
        demo obj = new demo();
        obj = null;
        System.gc();        
    }
}