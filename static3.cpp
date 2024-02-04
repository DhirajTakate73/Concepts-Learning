#include<iostream>
using namespace std;
class demo
{
public:
int i;             //12 bytes total  memoery milel
int j;
static int k;     //lonchayachi vati  taatachya baher

demo(int a=10, int b=20)   //parameterised constructor with default arguments
{
i=a;
j=b;
}         

void display()      
{
    cout<<"inside non static method display\n";
    cout<<"value of i"<<i<<"\n";
    cout<<"value of j"<<j<<"\n";
    cout<<"value of k"<<k<<"\n";
}
static void fun()
{
      cout<<"inside static method fun\n";
      cout<<"value of k"<<k;
}

};
int demo::k=111;    //:: scope resolution operator data fetech karnyasathi class ch nav aadhi lihun acces  karaycha 
    // static variable class chya baher mention karaycha
int main()
{
     cout<<"value of k is:"<<demo::k<<"\n"; 
     demo::fun();       //without creating obj fun call kel

    demo obj1(11,21);
    demo obj2(51,101);
    demo obj3(121,151);

    cout<<"size  of object is:"<<sizeof(obj1)<<"\n";

    obj1.display();
    obj2.display();
    obj3.display();

    obj1.fun();      // internally demo::fun() asa consider hot 
                    // obj cha nav vaprun paan fun call karta yet
return 0;
}
//object madhye fakt non static variable thevtat
//non static variable la instance variable boltat
//static la class variable boltat




//static behaviour cha program