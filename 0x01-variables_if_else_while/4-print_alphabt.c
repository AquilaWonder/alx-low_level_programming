#include <stdio.h>
/**
 * main - This program prints the stdout
 * Return: 0 (Success)
 */
int main(void)
{
	char lowerCase, not, nott;

	not = 'e';
	nott = 'q';

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
	if (lowerCase != not && lowerCase != nott)
	putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
