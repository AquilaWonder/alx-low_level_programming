#include <stdio.h>
/**
 * main - This program prints alphabets in a reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
