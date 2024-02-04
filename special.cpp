#include<iostream>
using namespace std;
class demo               //class defination
{

public:                //access specifier
int i;                 //chracteristics 
int j;                 //characteristics

demo ()               //default constructor   which accepts nothing
{
cout<<"inside default constructor\n";
i=0;
j=0;
}
    demo(int a, int b)        //parameterised constructor
    {
       cout<<"inside parameterised constructor\n";
       i=a;
       j=b;

    }

    demo(demo&ref)     //copy constructor   internally (demo&ref=obj2;)
    {
         cout<<"inside copy constructor\n";
           i=ref.i;
           j=ref.j;

    }
    ~demo()                     //~tilda symbol bolta yala    3da constructor call mahnun 3da marnar
    {
        cout<<"inside destructor\n";
    }
};
int main()
{
demo obj1;           //default constructor call hoil      bracket() takalyavar obj 1 chya pudhe hey print nahi honar
demo obj2(11,21);      //parameterised constructor call hoil
demo obj3(obj2);       //copy-||-

    return 0;

}