#include<myNumbers.h>

/*void factorial()
{
 int factorial;
 
  	printf("Enter a number to calculate it's factorial\n",5);
  	factorial=fact(5);
    printf("Factorial of the num(%d) = %d\n",5,factorial);
}
 */
int factorial(n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}