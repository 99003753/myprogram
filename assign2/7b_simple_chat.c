//Write a program to implement simple chat application between two processes using named pipes (FIFOs)

 
#include <sys/types.h> 
#include <fcntl.h> 
#include <stdio.h>
#include <string.h> 
#include <unistd.h> 
#include <sys/stat.h> 



int main() 
{ 
    int fd_2; 
  
    // FIFO file path 
    char * myfifo = "/tmp/myfifo"; 
  
    // Creating the named file(FIFO) 
    // mkfifo(<pathname>,<permission>) 
    mkfifo(myfifo, 0666); 
  
    char str1[80], str2[80]; 
    while (1) 
    { 
        // First open in read only and read 
        fd_2 = open(myfifo,O_RDONLY); 
        read(fd_2, str1, 80); 
  
        // Print the read string and close 
        printf("Client-1: %s\n", str1); 
        close(fd_2); 
  
        // Now open in write mode and write 
        // string taken from user. 
        fd_2 = open(myfifo,O_WRONLY); 
        fgets(str2, 80, stdin); 
        write(fd_2, str2, strlen(str2)+1); 
        close(fd_2); 
    } 
    return 0; 
}