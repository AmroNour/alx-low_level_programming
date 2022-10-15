#include <stdio.h>

/**
 * main - program that prints all possible different combinations of
 * three digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: 0
 */

int main(void)
{
	int n;
	int i;
	int h;

	for (h = 0 ; h != 8 ; h++)
	{
		for (n = h + 1 ; n != 9 ; n++)
		{
			i = n + 1;
			do {
				putchar('0' + h);
				putchar('0' + n);
				putchar('0' + i);
				if (h != 7)
				{
					putchar(',');
					putchar(32);
				}
				i++;
			} while (i != 10);
		}
	}
putchar('\n')
return (0);
}
