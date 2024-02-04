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

int main()
{

hello hobj;
cout<<sizeof(hobj)<<"bytes\n";  // 20    // aadi parent class cha constructor call hoil mg child class cha destuctor aadi child class cha mg parent cha 

cout<<hobj.x<<"\n";
cout<<hobj.y<<"\n";
cout<<hobj.a<<"\n";
cout<<hobj.b<<"\n";
cout<<hobj.c<<"\n";

hobj.fun();
hobj.gun();

    return 0;
}