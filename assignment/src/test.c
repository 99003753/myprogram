#include "myNumbers.h" 
#include "mystring.h"

void setUp(){ }

void tearDown(){ }

void factorial(void)                              
{
    TEST_ASSERT_EQUAL(120,factorial(5));
}


void IsPalindrome(void)                            
{
TEST_ASSERT_EQUAL(232,IsPalindrome(232));

}

void flip(void)                                    
{
TEST_ASSERT_EQUAL(-6,flip(5));

}
void IsPrime(void)                                  
{
TEST_ASSERT_EQUAL(7,IsPrime("prime number"));

}
void mystrcat(void)    
{
TEST_ASSERT_EQUAL("HELLO WORLD!",mystrcat("HELLO" "WORLD!"));

}
void mystrlen(void)    
{
TEST_ASSERT_EQUAL(1,mystrlen(12));

}
void mystrcpy(void)    
{
TEST_ASSERT_EQUAL("HELLO HELLO",mystrcpy("HELLO"));

}
void mystrcmp(void)    
{
TEST_ASSERT_EQUAL("Entered strings are not equal",mystrcmp("HELLO" "WORLD"));

}
void vsum(void)                                   
{
TEST_ASSERT_EQUAL(-6,vsum(5));

}

int main(void)

{
UNITY_BEGIN();

RUN_TEST(factorial);
RUN_TEST(flip);
RUN_TEST(isPrime);
RUN_TEST(mystrcat);
RUN_TEST(mystrcmp);
RUN_TEST(mystrcpy);
RUN_TEST(mystrlen);
return UNITY_END();

}
