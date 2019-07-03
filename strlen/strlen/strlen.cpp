#include<stdio.h>
#include<string.h>
#include<assert.h>


size_t _Strlen(char* str)
{
	assert(str != NULL);
	size_t counter = 0;
	char* temp = str;

	while (*str++ != '\0')
	{
		counter++;
	}
	return counter;
}

int main()
{
	char* str = NULL;
	printf("%d", _Strlen(str));
}