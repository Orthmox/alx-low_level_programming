#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: is the string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s)
	{
		return (1 + (_strlen(s + 1)));
	}
	else
		return (0);
}
/**
 * palichk - checks if a string is palindrome
 * @s: is the string
 * @l: is the length of the string begining at 0
 * Return: 1 if palindrome, 0 if not
 */
int palichk(char *s, int l)
{
	int i = 0;
	int j = l - 1;

	if (l == 0 || l == 1)
		return (1);
	if (s[i] != s[j])
		return (0);
	if (s[i] != '\0' && s[i] == s[j])
	{
		return (palichk((s + 1), (j - 1)));
	}
	return (1);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: is the string
 * Return: 0 if false, 1 if true
 */
int is_palindrome(char *s)
{
	int l = _strlen(s);
	return (palichk(s, l));
}
