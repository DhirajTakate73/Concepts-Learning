#include<iostream>
using namespace std;
class demo
{
    public:
    int i;
    int j;            
    int k;            

    demo(int a, int b, int c)   // initialisation list  //parameterised constructor
    {
        i=a;
        j=b;     
        k=c;    
    }
    void fun()
    {
        i++;
        j++;
        k++;

    }
    void gun(int x, const int y) const   //function constant karaycha asel tar asa syntax aani ha chukicha nahi ye
    {
        int no1=10;
        const int no2=20;
        
        x++;        //A
        // y++;     //NA
        no1++;      //A
       // no2++;      //NA

        // i++;     //NA
        // j++;     //NA
        //k++;      //NA

    }

};
int main()
{
    demo obj(11,21,51);
    obj.fun();          
    obj.gun(51,101);

    const demo obj2(11,21,51);          //purn constant object ahe ha 
    //obj2.fun();
    obj2.gun(51,101);

    
    return 0;

}