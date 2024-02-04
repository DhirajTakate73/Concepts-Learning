#include<stdio.h>   //printscanf
#include<fcntl.h>   //file control open close read write
#include<unistd.h>  //universal standard 
#include<Sting.h>
int main()
{
    int fd=0;   //File discripter
    char arr[]="marvellous infosystem";
    int ret=0; 

   fd=open("Marvellous.txt",O_RDWR);    //creat is system call ahe

    ret=write(fd,arr,strlen(arr));  //(kashat lihaycha, kay lihaycha, kiti lihaycha)

    printf("%d bytes gets written in the file\n",ret);
    close(fd);

    return 0;
}

//marvellous navachi file tyar hoil ppa folder madhye navin program compile kelyavar
//O_RDONLY: READ
//O_WRONLY: WRITE
//O_RDWR: READ+WRITE

