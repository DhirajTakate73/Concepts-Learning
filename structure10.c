#include<stdio.h>
struct demo
{
int no;
struct demo *ptr;
};
int main()
{
    struct demo obj1, obj2, obj3;
    obj1.no=11;
    obj2.no=21;
    obj3.no=51;

    obj1.ptr=&obj2;
    obj2.ptr=&obj3;
    obj3.ptr=NULL;

    printf("%d\n",obj1.no);//11
    printf("%d\n",obj1.ptr->no);//21
    printf("%d\n",obj1.ptr->ptr->no);//51

    return 0;

}

//self referential structure
//singly linear linked list                          //imp program ->arrow operator used 