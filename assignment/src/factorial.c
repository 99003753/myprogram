#include<myNumbers.h>

/*void factorial()
{
 int factorial;
 
  	printf("Enter a number to calculate it's factorial\n",5);
  	factorial=fact(5);
    printf("Factorial of the num(%d) = %d\n",5,factorial);
}
 */
int factorial(5)
{
    int i,f=1;
    for(i=1;i<=5;i++)
    {
        f=f*i;
    }
    return f;
}