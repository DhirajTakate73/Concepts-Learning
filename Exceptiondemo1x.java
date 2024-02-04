import java.util.*;

class Exceptiondemo1x   //(file chya pudhe x lihila ahe mahanje ti updated file ahe)
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner (System.in);

        System.out.println("enter first number : ");
        int ino1=sobj.nextInt();

        System.out.println("enter second number : ");
        int ino2=sobj.nextInt();        //user kadun iIndex madhye index ghetoy ithe

        int ians=0;
        try         //exception yeu shakta te try block madhye lihila for eg. /0 kel kiva 4 chya 5 jagi 5 array index takli
        {
            System.out.println("Inside try block");
            ians=ino1 / ino2;
        }
        catch (ArithmeticException obj)
        {
            System.out.println("Inside catch block"+obj);
        }
        catch(ArrayIndexOutOfBoundsException obj)           //exception ahe catch chya pudhcha
        {
            System.out.println("Array Index Out Of Bounds Exception"+obj);
        }
        catch(Exception obj)  //(MSD catch kahipaan feka me handle karel)              //(obj lihila ahe karan exception obj madhye catch(pakdun thevaycha) karaycha)
        {
            System.out.println("Inside Generic catch block "+obj);
        }
        finally     //(keyword aslyamule pink colour madhye display hot a)
        {
            System.out.println("Inside finally block");
        }

            System.out.println("division is : "+ians);
    }
}

//according to terminology of java everything that we handle inside catch block are references.


/*enter first number :
21
enter second number :
7
Inside try block            cathch madhye nahi gela karan 0 dila tar exception yeil aani te dilach nahi
Inside finally block        finally madhye jatoch
division is : 3
*/