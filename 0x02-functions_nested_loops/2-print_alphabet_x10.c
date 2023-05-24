#include	"main.h"

/*
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * print new line
 */

void	print_alphabet_x10(void)
{
	int	new_line	=	0;

	while	(new_line	<	10)
	{
		char	letter	=	'a';
			while	(letter	<=	'z')
			{
				_putchar(letter);
				letter++;
			}

		_putchar('\n');
		new_line++;
	}
}
