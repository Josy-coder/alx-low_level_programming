#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @search: string to search in
 * @subsearch: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *search, char *subsearch)
{
	int i, j;

	for (i = 0; search[i] != '\0'; i++)
	{
		for (j = 0; subsearch[j] != '\0'; j++)
		{
			if (search[i + j] != subsearch[j])
				break;
		}
		if (!subsearch[j])
			return (&search[i]);
	}
	return (NULL);
}
