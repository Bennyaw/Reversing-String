#include <stdio.h>
#include "unity.h"
#include "ReversingString.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getStringLength_given_a_NULL_expect_0(void)
{
  printf("size of an integer %d",sizeof(int));
  TEST_ASSERT_EQUAL(0, getStringLength(NULL));
}

void test_getStringLength_given_an_empty_string_expect_0(void)
{
  TEST_ASSERT_EQUAL(0, getStringLength(""));
}


/*void test_ReversingString_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement ReversingString");
}*/
