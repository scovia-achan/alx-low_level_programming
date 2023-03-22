#include <stdio.h>
#include "main.h"
#include <time.h>

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int min, sec;

	for (min = 0; min <= 23; min++)
	{
		for (sec = 0; sec <= 59; sec++)
		{
			_putchar (min / 10 + '0');
			_putchar (min % 10 + '0');
			_putchar (':');
			_putchar (sec / 10 + '0');
			_putchar (sec % 10 + '0');
			_putchar ('\n');
		}
	}
}
