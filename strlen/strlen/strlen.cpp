#include<stdio.h>
#include<string.h>
#include<assert.h>

/*
一般实现原理
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
*/


//用递归方法实现Strlen

size_t _Strlen(char* str)
{
	assert(str != NULL);
	if (*str == '\0')
		return 0;
	else
		return _Strlen(str + 1) + 1;
	
}

int main()
{
	char* str = NULL;
	printf("%d", _Strlen(str));
}