
class Array1
{
    public static void main(String arg[])
    {
        //1
        int arr1[]={11,21,51,101};   //static memory allocation

        //2
        int arr2[]=new int[4];  //dynamic array allocation      new keyword ahe mahnun
        arr2[0]=11;
        arr2[1]=21;
        arr2[2]=51;
        arr2[3]=101;

        System.out .println("length of array aar1 is :"+arr1.length);    //length chya pudhe () nahi karan function nahi ,length sangto 4 integer cha array ahe ,ha size of sarkha nahi  
        System.out.println("length of array arr2 is :"+arr2.length);

        int icnt=0;
            //1         2               3
        for(icnt=0; icnt<arr1.length; icnt++)       //icnt<arr1.length(mahanje 4)  0<4
        {
            System.out.println(arr1[icnt]); //4
        }
    }
}


//sonar daginyachi chittgi baghun vajan sangto tasa arr1.length bollyavar jvm array chi length sangto

