#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
struct Demo obj1;
struct Demo obj2;

struct Demo *ptr=NULL;
//struct Demo *ptr=&obj2;
ptr=&obj2;

obj1.i=11;
obj1.f=90.99;
obj1.j=21;

ptr->i=51;
ptr->f=90.99;
ptr->j=101;

printf("%d\n",obj1.i);
printf("%d\n",ptr->i);


return 0;
}



//pointer points to structure example