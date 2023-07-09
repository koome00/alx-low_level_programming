#include "main.h"
/**
 * binary_to_uint - converts binary ti unsigned int
 * @b: binary to be converted
 * Return: returns converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	int i;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; *b != '\0'; len++)
	{
		return len;
	}
	len -= 1;
	i = 0;
	while (b[i])
	{
		if ((b[i] != 1) && (b[i] != 0))
		{
			return (sum);
		}
		if (b[i] == '1')
		{
			sum += (1 * ( 1 << len));
		}
		i++;
		len++;
	}
	return (sum);
}
