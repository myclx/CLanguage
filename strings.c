#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
size_t my_strlen(const char* s)
{
	size_t n = 0;
	while (s[n] != '\0')
	{
		n++;

	}
	return n;
}

char* my_strcpy(char* dst, const char* src)
{
	size_t i = 0;
	while (src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;
}



int my_strcmp(const char* s1, const char* s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (int)*s1 - (int)*s2;
}

/* ---- my_strlen ---- */
int main(void)
{
	printf("strlen(\"hello\") = %zu\n", my_strlen("hello"));
	printf("strlen(\"\")      = %zu\n", my_strlen(""));



	/* ---- my_strcpy ---- */
	char buf[32];
	char* ret = my_strcpy(buf, "hello");
	printf("strcpy:%s\n", buf);
	printf("ret == buf ? %d\n", ret == buf);

	my_strcpy(buf, "");
	printf("strcpy empty: %s\n", buf);



	/* ---- my_strcmp ---- */
	printf("strcmp(abc,abd) = %d\n", my_strcmp("abc", "abd"));//期望值为负
	printf("strcmp(abc,abc) = %d\n", my_strcmp("abc", "abc"));//期望值为0
	printf("strcmp(abc,a) = %d\n", my_strcmp("abc", "a"));     //期望值为正
	return 0;
}













