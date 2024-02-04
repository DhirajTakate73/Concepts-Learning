class Base
{
    public int a,b;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void fun()
    {
        System.out.println("Base fun");
    }
}
class Derived extends Base 
{
    public int x,y;
    public Derived()
    {
        System.out.println("Derived constructor");
    }
    public void gun()
    {
        System.out.println("Derived gun");
    }
}
class Derivedx extends Derived
{
    public int p,q;
    public Derivedx()
    {
        System.out.println("Derivedx constructor");
        
    }
}
class Multilevel
{
    public static void main(String A[])     
    {
        Derivedx dobj=new Derivedx();
        dobj.fun();
        dobj.gun();
    }
}