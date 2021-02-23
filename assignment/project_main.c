#include<myNumbers.h>
#include<mystring.h>
int main()
{int a;
    printf("1--factorial, 2--flip , 3---palindrome ,4--prime,5-----Strcat,6---StrCmp,7---Strcpy,8--Strlen,9--Vsum");
    scanf(a);
    if (a==1)
    {
        factorial();
    }
    else if(a==2)
    {
         flip();
    }
    else if(a==3)
    {
        IsPalindrome();
            }
    else if(a==4)
    {
        IsPriime();
    }
    else if(a==5)
    {
        mystrcat();
    }
    else if(a==6)
    {
        mystrcmp();
    }
    else if(a==7)
    {
        mystrcpy();
    }
    else if(a==8)
    {
        mystrlen();
    }
    else if(a==9)
    {
        Vsum();
    }
}