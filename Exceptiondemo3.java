import java.util.*;

class Demo
{
    public void Division()
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

class Exceptiondemo3 
{
    public static void main(String arg[])
    {
        
        Demo dobj=new Demo();
        dobj.Division();
    }
}