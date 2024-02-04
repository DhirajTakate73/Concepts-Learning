#include<iostream>
using namespace std;

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
    }
};

void display()              //naked fun class chya baher ahe mahnun
{                    //display fun fakt mitra ahe demo class cha child class madhye tycha kahi sambhand nahi
    demo obj;
    cout<<"value of i:"<<obj.i<<"\n";
    cout<<"value of j:"<<obj.j<<"\n";
    cout<<"value of k:"<<obj.k<<"\n";
}
int main()
{
    display();

    return 0;
}                   //errors ahet yath edit nahi karayche