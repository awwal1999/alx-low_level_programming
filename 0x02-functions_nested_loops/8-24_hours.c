#include "main.h"

/**
 * jack_bauer - print every minute of 00:00 to 23:59.
 *
 * Return: Always void
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 00; hr < 24; hr++)
	{
		for (min = 00; min < 60; min++)
		{
			_putchar(((hr / 10) + '0'));
			_putchar(((hr % 10) + '0'));
			_putchar(':');
			_putchar(((min / 10) + '0'));
			_putchar(((min % 10) + '0'));
			_putchar('\n');
		}
	}
}
