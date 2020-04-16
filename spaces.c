/************************************************* 
 * spaces.c	Revision 0.01
 * ~~~~~~~~
 * Add a space after each character in a string.
 *
 * Input
 * -----
 *  This is a string.
 * Expected output
 * ---------------
 *  T h i s i s a s t r i n g .
 *************************************************/

#include <stdio.h>
#include <string.h>

void spaces()
{
	char *str = NULL;
	printf("Enter a string: ");
	//scanf("%ms", &str);
	gets(&str);
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c ", str[i++]);
	}
}

int main(int argc, char **argv)
{
	//strcat(*argv, '\0');
	//*argv[sizeof(*argv) + 1] = '\0';
	spaces();
	return 0;
}

