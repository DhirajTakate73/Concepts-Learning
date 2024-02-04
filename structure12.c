#include<stdio.h>

union demo 
{                                //union

    int i;//4
    char ch;//1
    float f;//4
    double d;//8
};
int main()
{

union demo obj; 

printf("size of object is :%lu\n",sizeof(obj));

obj.f=90.99;
printf("%f\n",obj.f);

obj.i=11;
printf("%d",obj.i);

    return 0;
}