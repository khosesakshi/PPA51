class demo
{
    public int  no1;
    final public int no2;        //const int no2=21;

    public demo(int A,int B)
    {
        no1=A;
        no2=B;
    }
}
class Finaldemo3
{
    public static void main(String a[])
    {
        demo dobj=new demo(11,21);

        System.out.println("value of no1:"+dobj.no1);
        System.out.println("value of no2:"+dobj.no2);
     
            dobj.no1++;
           // dobj.no2++;     //error//dobj.no2=dobj.no2+1;
    
    }
}