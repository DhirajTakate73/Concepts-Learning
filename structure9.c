#include<stdio.h>

struct hello
{
    int no;//4
    float d;//4
};
struct Demo
{
    int i;//4
    float f;//4
    struct hello hobj1;//8 hello madhle int aani float milun 8 bytes
    struct hello hobj2;//8  hello madhle int aani float milun 8 bytes

}dobj;

int main()
{

printf("size of object is : %d\n",sizeof(dobj));


return 0;
}