#include<stdio.h>   //printscanf
#include<fcntl.h>   //file control open close read write
#include<unistd.h>  //universal standard 
#include<String.h>

int main()
{
   unlink("marvellous.txt");

   printf("file deleted successfully...\n");

    return 0;
}

//marvellous navachi file tyar hoil ppa folder madhye navin program compile kelyavar
//O_RDONLY: READ
//O_WRONLY: WRITE
//O_RDWR: READ+WRITE
