#include<iostream>
using namespace std;
int main()
{

int no=11;
int &ref=no;//reference operator & cha arth badalla fakt
int &x=no;   //int &x=ref;   asa paan chalta reference of reference

int*p=&no;//11
int *(&q)=p;//11

cout<<no<<"\n";//11
cout<<ref<<"\n";//11

cout<<&no<<"\n";//100
cout<<&ref<<"\n";//100

cout<<*p<<"\n";//11
cout<<*q<<"\n";//11

    return 0;
}