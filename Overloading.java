class arithematic
{
    public int addition(int A,int B)        //addition@2ii
    {
        return A+B;
    }
    public int addition(int A,int B,int C) //addition@3iii
    {
        return A+B+C;
    }
    public float addition( float A, float B)  //addition@2ff
    {
        return A+B;
    }
}

class Overloading
{
    public static void main(String a[])
    {
arithematic aobj=new arithematic();
System.out.println(aobj.addition(10,11));
System.out.println(aobj.addition(10,11,21));
System.out.println(aobj.addition(10.5f,11.2f));   
 }
}
