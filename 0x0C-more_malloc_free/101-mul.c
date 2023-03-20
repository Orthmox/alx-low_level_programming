#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - programs that multiplies two positive numbers
 * @argc: is the argument counter
 * @argv: is the argument vector
 * Return: Success (0)
 */
/*int _putchar(char c);*/

int main(int argc, char *argv[])
{
    int i, j, num1, num2;
    long int *prod;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    if (num1 == 0 || num2 == 0)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!(isdigit(argv[i][j])))
            {
                printf("Error\n");
                exit(98);
            }
        }
    }

    prod = (long int *)malloc(sizeof(int));
    *prod = num1 * num2;
    printf("%ld\n", *prod);
    /*_putchar('\n');*/
    free(prod);
    return (0);
}
