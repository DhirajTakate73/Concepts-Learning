#include<iostream>
using namespace std;
class Demo
{
    int i;              //private karan kahi nahi mahnun default private asto c++ madhye
    public:
    int j;
    private:
    int k;
    protected:
    int a;
    public:
    demo()              //default constructor
    {
        i=10;
        j=20;
        k=30;
        a=40;

    }
    void display()      //parameters display karnyasathi hey function
    {
        cout<<"value of i:"<<i<<"\n";     //A  
        cout<<"value of j:"<<j<<"\n";     //A  
        cout<<"value of k:"<<k<<"\n";     //A 
        cout<<"value of a:"<<a<<"\n";     //A  

    }

};
class hello:public Demo     //single level inheritance
{
    public:
    void hellodisplay()
    {
       // cout<<"value of i:"<<i<<"\n";  NA     
        cout<<"value of j:"<<j<<"\n";    //A
       // cout<<"value of k:"<<k<<"\n";  NA     
        cout<<"value of a:"<<a<<"\n";    //A   
    }
};

int main()
{
    hello hobj;
    hobj.hellodisplay();




    return 0;

}