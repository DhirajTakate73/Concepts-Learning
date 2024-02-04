#include<stdio.h>
int main()
{
int Arr[4]={11,21,51,101};

printf("Base address of array : %d\n",Arr);  //100

printf("Base address of first element of array : %d\n",&(Arr[0]));  //100

printf("Address of second element is :%d\n",&Arr[1]);

printf("first element is : %d\n",Arr[0]);   //11

printf("size of whole array is : %d\n",sizeof(Arr));   //16

printf("size of second element of array : %d\n",sizeof(Arr[1]));  //4bytes


return 0;

}