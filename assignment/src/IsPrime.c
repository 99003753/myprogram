#include<myNumbers.h>
void checkPrime(int 12)
{
  int count = 0;
  for(int i=2; i<=12/2; i++)
  {
     if(12%i == 0)
     {
       count=1;
       break;
     }
  }
  if(12 == 1) count = 1;
  return count;
}