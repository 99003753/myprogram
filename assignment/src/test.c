#include "myNumbers.h" 
#include "mystring.h"

void setUp(){ }

void tearDown(){ }

void factorial(void)                              //1
{
    TEST_ASSERT_EQUAL(120,factorial(5));
}


void IsPalindrome(void)                            //3
{
TEST_ASSERT_EQUAL(-6,flip(5));

}

void flip(void)                                    //4
{
TEST_ASSERT_EQUAL(-6,flip(5));

}
void IsPrime(void)                                  //5
{
TEST_ASSERT_EQUAL(1,IsPrime(12));

}
void mystrcat(void)    //error
{
TEST_ASSERT_EQUAL(1,mystrcat(12));

}
void mystrlen(void)    //error
{
TEST_ASSERT_EQUAL(1,mystrlen(12));

}
void mystrcpy(void)    //error
{
TEST_ASSERT_EQUAL(1,mystrcpy(12));

}
void mystrcmp(void)    //error
{
TEST_ASSERT_EQUAL(1,mystrcmp(12));

}
void vsum(void)                                   //2
{
TEST_ASSERT_EQUAL(-6,vsum(5));

}

int main(void)

{
UNITY_BEGIN();

RUN_TEST(factorial);
}