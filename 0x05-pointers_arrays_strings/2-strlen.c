#include "holberton.h"

/**
 * _strlen - count the length of string.
 * @s: is pointer char
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len])
		str_len++;

	return (str_len);
}

