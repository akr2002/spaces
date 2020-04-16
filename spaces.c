/************************************************* 
 * spaces.c	Revision 0.04
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
	scanf("%m[^\n]%*c", &str);
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			printf("%c", str[i++]);
			continue;
		}
		printf("%c ", str[i++]);
	}
}

int main(int argc, char **argv)
{
	spaces();
	return 0;
}

