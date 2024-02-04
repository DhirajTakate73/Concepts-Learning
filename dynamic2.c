#include<stdio.h>
#include<stdlib.h>      //dynamic memory allocation sayhi header file include keli
int main()
{
    int arr[5]; //static memory 20 auto storage class [stack madhye memory allocate hoil] 
    float fvalue;//static memory[stack madhye memory allocate hoil] 4
    double brr[4];//static memory 32 auto storage class [stack madhye memory allocate hoil] 

    int isize=0;
    int *ptr=NULL;
    
    printf("enter the size of array:\n");
    scanf("%d",&isize);

    ptr=(int*)calloc(isize,sizeof(int));    //4 byte chya patit memory de asa os sangto aapn (int * )mule runtime la allocate hoil malloc=memory allocation malloc chi return value void*(generic pointer)
              //malloc    * khodun ,dila fakt
    ptr[0]=10;
    ptr[1]=11;
    ptr[2]=12;

    free(ptr);


    return 0;

}       // koni address det asel tar pointer madhye store karaycha


//void *malloc(int size);
//void *calloc(int no_of_elements,int size_of_each_element);
//void *realloc(void *ptr,int new_size);
//void free(void *ptr);