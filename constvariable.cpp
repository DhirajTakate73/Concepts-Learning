#include<iostream>
using namespace std;
int main()
{
    int i=10;
    const int j=20;
   // const int k;   NA          //hey c madhye chalta pann c++ madhye nahi karan toh instant initialise karava lagto c++ madhye nahi tar error

    i++;        //Allowed
   // j++;      //Not allowed
    return 0;

}