#include <stdio.h>
#include <ctype.h>	// isascii()

int main()
{
	int i = 0;
	for (i = 125; i < 130; i++)
	{
		if (isascii(i))
			printf("%d is an ascii character : %c\n", i, i);
		else 
			printf("%d is not an ascii character\n", i);
	}
	return 0; 
}

	
