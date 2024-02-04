#include<iostream>
using namespace std;

class hello             //access specifier is private karan lil nahi ye aani private default asta c++ madhye 
{
    public:
    void display();         //fun class madhye declare (mahanje body nahi) kel paan prototype baher lihila kali asa chalta 
};              //hello cha member fun ahe void display
        //member of a class can be a friend
class demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;
    public:
    demo()
    {
        i=10;
        j=20;
        k=30;
    }               //hello navachya claas ch fun ahe hey asa sangitla fakt
    friend void hello::display();       //hello  chya aata display fun ahe te aat madhye friend declare kel ahe
};
void hello::display()              //fun baher define kel paan claas cha part ahe   asa access karnyachi paddhat ahe c++ madhye

    {
        demo obj;
        cout<<"value of i:"<<obj.i<<"\n";
        cout<<"value of j:"<<obj.j<<"\n";
        cout<<"value of k:"<<obj.k<<"\n";
    }

int main()
{
    hello hobj;
    hobj.display();

    return 0;
}                   //errors ahet yath edit nahi karayche