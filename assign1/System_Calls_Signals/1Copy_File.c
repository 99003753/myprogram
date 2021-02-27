#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int re;
    char buffer[100];
    char message[50] = "Hello! How are you!";
    re = open ("textfile.txt", O_RDWR);
    printf("fd = %d\n",re);
    if(re != -1)
    {
        printf("cpy_file was opened with r and w.\n");
        write(re, message, sizeof(message));         //write to file 
        lseek(re, 0, SEEK_SET);
        read(re, buffer, sizeof(message));           //read the file
        printf("\n %s was written to the file.\n",buffer);
        close(re);
    }
    return 0;
}