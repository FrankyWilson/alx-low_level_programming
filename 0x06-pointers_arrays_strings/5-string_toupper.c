#include "main.h"
/**
 *
 *
 */
char *string_toupper(char *)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;

		s++;
	}

	return (start);
}
