#include<mystring.h>
int mystrcpy()
{
    printf("\n\n\t\tHello\n\n\n");
    char a[100]="HELLO";
    char b[100]="";

    strcpy(a, b);
    printf("\n\nThe copied string is: %s\n\n", b);
    return 0;
}