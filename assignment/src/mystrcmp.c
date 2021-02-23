#include<mystring.h>
int mystrcmp()
{
    char a[100]="HELLO", b[100]="WORLD";    
    printf("Enter the first string\n %s",a);    
       

    printf("Enter the second string\n %s",b);    
    
    
    if( strcmp(a,b) == 0 )
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");
        return 0;
}