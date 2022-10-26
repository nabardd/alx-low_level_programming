
#include "main.h"
/**
 * rot13 - translate string to rot13
 * @s: input string to be translated
 *
 * Return: string after conversion to rot13
 */
char *rot13(char *s)
{
	int i, j;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_it[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot_it[j];
				j = 52;
			}
		}
	}
	return (s);
}
