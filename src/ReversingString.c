#include "ReversingString.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int getStringLength(char *str)
{
  if (str == 0 || *str == '\0')
  {
    return 0;
  }
  else
  {
	int count = 0;

	while( str[count] != '\0' )
	{
		count++;
	}
	return count;
  }

}

char *getReverseString(char *str)
{

	if (str == 0 || *str == '\0')
  {
    return 0;
  }
  else
  {
	int count = 0,last = 0, start = 0;

 	while( str[count] != '\0' )
	{
		count++;
	}
//	printf("number of string %d",count);
	char *revtemp;
	revtemp = malloc(count+1);

	last = count -1 ;

	for(int start = 0 ; start < count ; start++)
	{
		revtemp[start] = str[last];
		last--;
	}

//	prinf("the reverse string is ",rev);
//	rev = revtemp;

  revtemp[count] = '\0';

	return revtemp;
  }
}
