import java.util.*;

class Exceptiondemo2 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner (System.in);

       int Arr[]={10,20,30,40,50};

       System.out.println("enter the index from where you want to fetch the data :");
       int iIndex=sobj.nextInt();       //user kadun iIndex madhye index ghetoy ithe

       System.out.println("data is : "+Arr[iIndex]);
    }
}

//wrong input dil ki exception yet.

//segmentation fault          ==             exception.    sarkhach
   //lath ghalnari os                     //lath ghalnara jvm 
   
    //(khalcha exception object mahnun consider karto jvm anni throw karto)
//array index 5 dili ki java.lang.ArrayIndexOutOfBoundsException Hey exception yeil

//program nit lihila ahe paan runtime la vegla input dila ki exception yenar
//paan asa input c aani c++ madhye dila ki segmentation fault yeto
//segmentation fault in c and c++ is exactly same as exception in java