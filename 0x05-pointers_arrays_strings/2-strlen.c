#include "main.h"
/**
 * _strlen - function that returns lengh of a string
 *
 * @s: char of a strings
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\0')
	{
		total_len++;
	}
	return (total_len);
}
