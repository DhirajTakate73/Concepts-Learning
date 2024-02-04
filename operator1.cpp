#include<iostream>
using namespace std;
class demo
{
    public:
    int i,j;
    demo(int a=10, int b=20)        //parameterised constructor with default arguments
    {
        i=a;
        j=b;
    }
};
        // ha keyword lihava lagto overator overloading sathi
demo operator +(demo op1, demo op2)
//return value keyword operator operands asa syntax varcha  
{
    
    return demo(op1.i+op2.i, op1.j+op2.j);
  //return demo(11+5,21+6)  
  //return demo(16,27) asa internally hoil

}
int main()
{
    demo obj1(11,21);
    demo obj2(5,6);
    demo obj(0,0);

    obj= obj1 + obj2;   //obj= +(obj1,obj2); asa call jato internally function la automatically
                    
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    return 0;
}       


        //java madhye nahi operator overloading aani friend