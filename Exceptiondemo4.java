import java.util.*;

class Demo
{
    public void Division() throws java.lang.ArithmeticException     //exception yeu shakta kiva nahi paan baghun ghene
    {
        Scanner sobj=new Scanner (System.in);

        System.out.println("enter first number : ");
        int ino1=sobj.nextInt();

        System.out.println("enter second number : ");
        int ino2=sobj.nextInt();

        int ians=0;
        ians=ino1 / ino2;
        System.out.println("Division is :"+ians);

    }

}



class Exceptiondemo4
{
    public static void main(String arg[])
    {
        
        Demo dobj=new Demo();
        try
        {
            System.out.println("Inside try block");
            dobj.Division();            //exception yeil tu baghun ghe mahanje jo call kartoy to mahanje main fun  
        }                               //division jababdari zataktoy
        catch(ArithmeticException obj)
        {
            System.out.println("inside catch");
        }
        finally
        {
            System.out.println("Inside Finally");
        }

    }
}