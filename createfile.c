#include<stdio.h>   //printscanf
#include<fcntl.h>   //file control open close read write
#include<unistd.h>  //universal standard 

int main()
{
    int fd=0;   //gile discripter

    fd=creat("Marvellous.txt",0777);    //creat is system call ahe

    if(fd!=-1)
    {
        printf("file is successfully created with FD :%d\n",fd);
    }

    return 0;
}

//marvellous navachi file tyar hoil ppa folder madhye navin program compile kelyavar

