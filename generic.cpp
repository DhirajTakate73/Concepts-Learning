#include<iostream>
using namespace std;

template <class T>
T addition(T no1, T no2)  //naked functions
{
    T ans;    //kontya datatype cha ahe ans te mahit nahi
    ans=no1+no2;
    return ans;
}


int main()
{
    int iret=0;
    float fret=0.0f;
    double dret=0.0;

    iret=addition(10,11);
    fret=addition(10.0f, 11.0f);
    dret=addition(10.0, 11.0);

    cout<<iret<<"\n";
    cout<<fret<<"\n";
    cout<<dret<<"\n";

    return 0;
}