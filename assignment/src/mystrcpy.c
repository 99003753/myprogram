#include<mystring.h>
int mystrcpy()
{
    printf("\n\n\t\tHello\n\n\n");
    char a[100]="HELLO";
    char b[100]="WORLD";
    printf("\n\nstrcpy(destination, source): hello\n\n");
    printf("\n\nEnter the string: ",b);

    strcpy(a, b);
    printf("\n\nThe copied string is: %s\n\n", a);
    return 0;
}