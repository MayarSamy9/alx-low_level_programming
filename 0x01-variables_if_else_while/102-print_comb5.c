#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int firdigit = 0, secdigit;

	while (firdigit <= 99)
	{
		secdigit = firdigit;
		while (secdigit <= 99)
		{
			if (secdigit != firdigit)
			{
				putchar((firdigit / 10) + 48);
				putchar((firdigit % 10) + 48);
				putchar(' ');
				putchar((secdigit / 10) + 48);
				putchar((secdigit % 10) + 48);

				if (firdigit != 98 || secdigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secdigit++;
		}
		firdigit++;
	}
	putchar('\n');

	return (0);
}
