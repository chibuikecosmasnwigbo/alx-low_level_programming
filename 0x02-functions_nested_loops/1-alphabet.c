#include	"main.h"
/*
 *	main	-	check	the	code
 *
 *	Return:	Always	0.
 */
int	main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet()
{
	char	ch	=	'a';
	while	(ch	<=	'z')
	{
		_putchar(ch);
		ch++;
	}
	return	(0);
}
