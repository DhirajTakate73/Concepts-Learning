#include<iostream>
using namespace std;
class demo
{
    public:
    int x,y;
    demo()
    {
        cout<<"inside demo constructor\n";
         x=10;
         y=20;
    }
    ~demo()
    {
        cout<<"inside demo destructor\n";
    }
    void fun()
    {
        cout<<"inside fun of demo\n";
    }

};
//inheritance cha syntax hello is porga aani demo is baap
class hello: public demo   //class hello extends demo java cha syntax
{
    public:                 //behaviours 1 karan constructors aani destructors are special functions
    int a,b,c;
    hello()
    {
        cout<<"inside hello constructor\n";
        a=30;
        b=40;
        c=50;

    }
    ~hello()
    {
        cout<<"inside hello destructor\n";

    }
    void gun()
    {
        cout<<"inside gun of hello\n";
    }
                //swatache 12 aadhiche 8 so size is 20bytes
};
//class marvellous extends hello 
class marvellous :public hello
{
    public:
    int p;
    marvellous()
    {
        cout<<"inside constructor of marvellous \n";
        p=60;
    }
    ~marvellous()
    {
        cout<<"inside destructor of marvellous \n";
    }
    void sun()
    {
        cout<<"inside sun of marvellous \n";
    }
};

int main()
{

marvellous mobj;
cout<<sizeof(mobj)<<"bytes\n";  // 24    // aadi parent class cha constructor call hoil mg child class cha destuctor aadi child class cha mg parent cha 

cout<<mobj.x<<"\n";
cout<<mobj.y<<"\n";
cout<<mobj.a<<"\n";
cout<<mobj.b<<"\n";
cout<<mobj.c<<"\n";
cout<<mobj.p<<"\n";


mobj.fun();
mobj.gun();
mobj.sun();

    return 0;
}
