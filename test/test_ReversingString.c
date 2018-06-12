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
  TEST_ASSERT_EQUAL(0, getStringLength('\0'));
}

void test_getStringLength_given_frame_expect_5(void)
{
  TEST_ASSERT_EQUAL(5, getStringLength("frame"));
}

void test_getStringLength_given_12345_expect_5(void)
{
  TEST_ASSERT_EQUAL(5, getStringLength("12345"));
}

void test_getStringLength_given_framework_expect_9(void)
{
  TEST_ASSERT_EQUAL(9, getStringLength("framework"));
}


void test_getReverseString_given_hi_expect_ih(void)
{
  TEST_ASSERT_EQUAL_STRING("ih", getReverseString("hi"));
}
/*void test_ReversingString_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement ReversingString");
}*/
