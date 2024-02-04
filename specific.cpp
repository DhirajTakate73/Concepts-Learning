#include<iostream>
using namespace std;

int additionI(int no1, int no2)  //naked functions
{
    int ans=0;
    ans=no1+no2;
    return ans;
}
float additionF(float no1, float no2)    //naked functions
{
    float ans=0.0;
    ans=no1+no2;
    return ans;
}
double additionD(double no1, double no2) //naked functions
{
    double ans=0.0;
    ans=no1+no2;
    return ans;
}
int main()
{
    int iret=0;
    float fret=0.0f;
    double dret=0.0;

    iret=additionI(10,11);
    fret=additionF(10.0f, 11.0f);
    dret=additionD(10.0, 11.0);

    cout<<iret<<"\n";
    cout<<fret<<"\n";
    cout<<dret<<"\n";

    return 0;
}