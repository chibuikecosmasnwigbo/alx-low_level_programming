#include	<stdlib.h>
#include	<time.h>
#include	<stdio.h>
/**
 * main	-	description	:	Entry	point
 *
 * Return:	0	(success)
 */

int	main(void)/*	Returns	nothing	*/
{

	int	n;
	n	=	13;

	srand(time(0));
	n	rand(0)	-	RAND_MAX	/	2;
	if	n	>	0;
	{
		printf("the	number	%d	is	positive",	(n));
	}
	else	if	n	==	0;
	{
		printf("the	number	%d	is	zero",	(n));
	}
	else
	{
		printf("the	number	%d	is	negative",	(n));
	}
}
