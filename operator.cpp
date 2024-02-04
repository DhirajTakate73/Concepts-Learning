#include<iostream>
using namespace std;
class demo
{
    public:
    int i,j;
    demo(int a=10, int b=20)        //parameterised constructor with default constructor 
    {
        i=a;
        j=b;
    }
};
int main()
{
    demo obj1(11,21);
    demo obj2(5,6);
    demo obj3(0,0);

    obj= obj1 + obj2;       //primitive datatype nahi user defined datatype ahe so overloading needed 
            //error yeil karan  user defined class chya objects chi addition ahe te complier la mahit nasta user la mahit asta
    return 0;
}       // overload mahanje 


        //java madhye nahi operator overloading aani friend