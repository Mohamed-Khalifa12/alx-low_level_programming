#include "../main.h"

int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int i;
	for (i = 0; i <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
	{
		s1++;
		s2++;
	}
	return (i - b);
}

char *_strstr(char *haystack, char *needle)
{
	unsigned int len;
	/*Get length of needle for strncmp*/
	len = 0;
	while (needle[len] != '\0')
		len++;
	/*compare substring*/
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (0);
}
