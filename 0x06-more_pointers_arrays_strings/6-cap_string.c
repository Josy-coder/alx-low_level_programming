#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @m: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *m)
{
	int i, j;

	char mpe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; m[i] != '\0'; i++)
	{
		if (i == 0 && m[i] >= 'a' && m[i] <= 'z')
			m[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (m[i] == mpe[j])
			{
				if (m[i + 1] >= 'a' && m[i + 1] <= 'z')
				{
					m[i + 1] -= 32;
				}
			}
		}
	}

	return (m);
}
