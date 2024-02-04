#include<stdio.h>
int main()
{
int arr[5]={10,20,30,40,50};

printf("%d\n",arr);//100
printf("%d\n",&arr);//100

printf("%d\n",arr+1);//104 fakt 1st arr +1 hoil
printf("%d\n",&arr+1);//120 purn arr cha address +1 mahnun 20ne pudhe jail  (purn patti cha address 100 consider hoil)

printf("%d\n",arr[1]);//20         karan array internally pointer consider hoto mahnun address varchi value aanun deto
printf("%d\n",arr[3]);//40
printf("%d\n",*(arr+3));//40 varcha kiva ha same asta          A+B like
printf("%d\n",*(3+arr));//40                                   B+A  like
printf("%d\n",3[arr]);//40
    return 0;

}


//array is internally considered as pointer