#include<stdio.h>
//#pragma pack(1)   // takla tar 17 bytes yeil
struct demo 
{

    int i;
    char ch;
    //char ch1;
    //char ch2;        //comment madhye j ahe te hilila tari paan size same yeil 
    //char ch3;
    float f;
    //int no;
    double d;
};
int main()
{

struct demo obj;
printf("size of object is :%lu\n",sizeof(obj));

    return 0;
}

//padding cha program 13 bytes bhetayla pahije tar 16 bytes bhettey...
//int asla double chya jagi