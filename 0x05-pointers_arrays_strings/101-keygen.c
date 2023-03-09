#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Return: return 0
*/
int main(void)
 {
	 int contador;
	 int  password;
	 int  aleatorio;

	srand(time(NULL));
	password = 2772;
	contador = 0;

	while (password > 122)
	{
		aleatorio = (rand() % 100);
		printf("%c", aleatorio);
		password -= aleatorio;
		contador++;
	}
	printf("%c", password);
	return 0;
 }
