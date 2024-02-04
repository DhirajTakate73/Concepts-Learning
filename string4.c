#include<stdio.h>
int calculatelength(char *str)
{
    int icnt=0;
    while(*str !='\0')
    {
        icnt++;
        str++;
    }
    return icnt;
}
int main()
{
    char arr[40];
    int iret=0;

    printf("enter your name : \n");
    scanf("%[^'\n']s",arr);   //purn string scan karnyasathi
    //string accept kara enter det nahi toparyant asa arth varchya line cha
    //string madhye display karnar mahnun %s
    //name of array is internally considered as base address so no need to give & operator in scanf.
    iret=calculatelength(arr);

    printf("length of string is :%d\n",iret);

    return 0;
}
//  ^  not equal to symbol