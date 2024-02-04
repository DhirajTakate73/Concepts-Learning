#include<iostream>
using namespace std;
class demo
{
    public:
    //1000    imaginary addressess
    int addition(int a,int b) //2int chi addition tyach logic
    {                         //(addition@2ii)  (compiler swat ase nav deto)
        int ans=0;
        ans=a+b;
        return ans;
    }
    //2000
    int addition(int a, int b, int c)//3int addition
    {                                //addition@3ii
        int ans=0;
        ans=a+b+c;
        return ans;
    }
    //3000
    float addition(float a, float b)// 2int chi addition
    {                               //addition@2ff
        float ans =0.0f;
        ans=a+b;
        return ans;
    }

};
int main()
{
demo obj;
int i=10, j=20, k=30;
int ret=0;
float p=90.9,q=80.0,fret=0.0;

fret=obj.addition(p,q);      //call 1000
cout<<"addition is:"<<fret<<"\n";

ret=obj.addition(i,j);        // call 2000
cout<<"addition is :"<<ret<<"\n";

ret=obj.addition(i,j,k);     //call 3000
cout<<"addition is :"<<ret<<"\n";

    return 0;
}



//function overloading cha program