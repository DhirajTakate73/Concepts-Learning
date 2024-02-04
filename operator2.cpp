//hey v4rat nahi jast karun paan mahit asla pahije 
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
    demo operator +( demo op2)
//return value keyword operator operands asa syntax varcha  
{
    return demo(this->i+op2.i, this->j+op2.j);
  //return demo(11+5,21+6)  
  //return demo(16,27) asa internally hoil
}

//

};
        // ha keyword lihava lagto overator overloading sathi

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