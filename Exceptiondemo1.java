import java.util.*;

class Exceptiondemo1 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("enter first number : ");
        int ino1=sobj.nextInt();

        System.out.println("enter second number : ");
        int ino2=sobj.nextInt();

        int ians=0;
        ians=ino1 / ino2;

        System.out.println("Division is : "+ians);
    }
}

//         (21/0) kelyavar code fatel aani arithrmaticexception asa exception yeil
//jvm ne arithrmaticexception asa paper var lihila aani fekla throw kela