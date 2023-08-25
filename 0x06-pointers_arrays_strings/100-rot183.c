#include "main.h"

char *rot13(char *input)
{
	char small_chars[] = "abcdefghijklmnopqrstuvwxyz"
	char upper_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

	for (int i = 0; input[i] != '\0'; ++i)
	{
		if ((input[i] < 'a' && input[i] > 'z') || \
			(input[i] < 'A' && input[i] > 'Z'))
			{
				continue;
			}
	}
	input[i] = input[i] - 13;
	return (input);
}
