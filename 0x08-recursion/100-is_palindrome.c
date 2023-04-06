#include "main.h"
/*
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * _strlen_recursion - returns the length of a string
 * check_pal - checks the characters in the string
 * @s: checks the string length
 * @i: iterator
 * @length: length of the string
 * Return: 1 if palindrome, if not 0
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
