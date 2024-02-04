
interface circle
{
    float PI=3.14f;            //characteristics that we mention inside interface are by default public final and  static

    public float area(float radius);        //all methods are by defalut public and abstract in interface
    public float circumfarance(float radius);
    //public lihina optional karan bydefault public astat interface chya method
    //characteristics of interface are fianl and static
}
class PPA implements circle             //circle chya dohni method la body den important aani jababdari ahe karan PPA implement kartoy
{
    public float area(float radius) 
    {return PI * radius * radius;}
    public float circumfarance(float radius)
    { return 2 * PI * radius; }
}

class Interfacedemo1  //(je file ch nav te main fun jyat ahe tych nav)
{
    public static void main(String arg[])
    {
       PPA pobj= new PPA();
       System.out.println("value of PI is :"+circle.PI);
       //Circle.PI=6.15                         //interface ch nav.member ch nav
       float fret=0.0f;
       fret=pobj.area(10.7f);
       System.out.println("area is :"+fret);
       fret=pobj.circumfarance(10.7f);
       System.out.println("circumfarance is :"+fret);

    }
}


//all characteristics of interface are bydefault public static and final(constant)
//all the behaviours of interface are bydefault abstract and public