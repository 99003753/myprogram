// Write a program to count no.of lines, words, characters in given file (like wc command)

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int f_details,size;
    char *ch=(char *)calloc(100,sizeof(char));
    f_details=open("textfile.txt",O_RDONLY);
    int inword;
    if(f_details<=0)
    {
        perror("Error:");
        exit(1);
    }
    size=read(f_details,ch,100);
    ch[size]="\0";
    int word=0,count=0,countLine=0,loop;

    for(loop=0;loop<strlen(ch);loop++)
    {
        if(ch ==' '|| ch=='\t'|| ch=='\0')
        {
            if(inword)
            {
                inword=0;
                word++;
            }
        }
        if(ch[loop]=='\n')
        {
            countLine++;
        }
        else 
            word=1;
    }
    printf("\nTotal number of lines: %d\nTotal number of words: %d\nTotal number of characters: %d\n",countLine,word,loop);
    close(f_details);
    return 0;
}