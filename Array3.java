

class Array3
{
    public static void main(String arg[])
    {
        int arr[][]={{10,20,30},{40,50},{60,70,80},{90,100,120,130},{140}};     //jagged array

        int i=0 , j=0;
            //1        2        3 
        for(i=0; i<arr.length; i++)     //outer
        {       //1      2             3
            for(j=0; j<arr[i].length; j++)  //inner
            {
                System.out.print(arr[i][j]+"\t");   //4
            }
            System.out.println();
        }   
    }
}