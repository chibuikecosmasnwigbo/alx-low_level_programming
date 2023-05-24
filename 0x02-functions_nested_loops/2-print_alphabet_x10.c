#include	"main.h"

/*
 * main	- print_alphabet_10x:  a function that prints 10 times the alphabet, in lowercase
 *
 * return:  void
 */

void	print_alphabet_x10(void)
{
	int	new_line	=	0;

	while	(new_line	<=	10)
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
