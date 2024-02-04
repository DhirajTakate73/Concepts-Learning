#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
        int arr[5];     //static memory 

        int *ptr1=(int*)malloc(5*sizeof(int));   //dynamic allocation in c programmming

        int *ptr2=new int[5];                    //dynamic in c++

        free(ptr1);     //c
         
        delete ptr2[];   //c++   purn list delete karnyasathi[] square bracket dila nahi dila tar fakt 1st element delete hoto
               //[]ptr2 asa paan chalta


    return 0;

}