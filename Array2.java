
class Array2
{
    public static void main(String arg[])
    {
        int arr[][]={{10,20,30},{40,50,60},{70,80,90}};

        int brr[][]=new int[3][3];

        brr[0][0]=10;
        brr[0][1]=20;
        brr[0][2]=30;

        brr[1][0]=40;
        brr[1][1]=50;
        brr[1][2]=60;

        brr[2][0]=70;
        brr[2][1]=80;
        brr[2][2]=90;

        int i=0 , j=0;
            //1         2       3
        for(i=0; i<arr.length; i++)     //outer
        {
            for(j=0; j<arr[i].length; j++)   //inner
           // 1        2           3
        {
            System.out.print(arr[i][j]+"\t"); //4       fakt print lihilyavar tych line var print hoil next line la janar nahi ani\t ne 5spaces jaga sodun print hoil
        }
            System.out.println();          //aani mg nantar next line la jail 
        }
    }
}




