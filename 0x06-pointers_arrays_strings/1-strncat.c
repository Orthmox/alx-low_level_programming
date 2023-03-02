/**
 * _strcat - appends one string to another
 * @dest: is the destination string
 * @src: is the string to be copied
 * Return: a string this time
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
