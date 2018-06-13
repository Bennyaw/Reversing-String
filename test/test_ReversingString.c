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
  char *str = getReverseString("hi");
  
  TEST_ASSERT_EQUAL_STRING ("ih", str);
}

void test_getReverseString_given_frame_expect_emarf(void)
{
  char *str = getReverseString("frame");
  
  TEST_ASSERT_EQUAL_STRING ("emarf", str);
}

void test_getReverseString_given_framework_expect_krowemarf(void)
{
  char *str = getReverseString("framework");
  
  TEST_ASSERT_EQUAL_STRING ("krowemarf", str);
}

void test_getReverseString_given_12345_expect_54321(void)
{
  char *str = getReverseString("12345");
  
  TEST_ASSERT_EQUAL_STRING ("54321", str);
}
/*void test_ReversingString_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement ReversingString");
}*/
