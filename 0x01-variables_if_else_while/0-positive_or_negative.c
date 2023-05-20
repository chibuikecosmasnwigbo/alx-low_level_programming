#include	<stdio.h>
#include	<time.h>
/*
 * main	-	Entry
 *
 * Return:	Always	0	(success)
 */

/*	function	main	*/

int	main(void)
{
	int	n	=	8;

	srand(time(0));

	n       =       rand()	-	RAND_MAX /       2;

	printf("%d\N",     n);
	if	(n       >       0)
		printf("is      positive");

	if	(n	==	0)
		printf("is	zero");
	if	(n	<	0)
		printf("is	negative");

	return	(0);
}

