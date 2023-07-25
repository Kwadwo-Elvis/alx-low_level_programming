/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
	int sign = 1; /* Initialize the sign to positive */
	int result = 0;
	int i = 0;

	/* Skip any leading white spaces */
	while (s[i] == ' ')
		i++;

	/* Check for signs before the number */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Parse the digits and build the integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow before adding the next digit */
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			/* If overflow, return the appropriate max/min value based on sign */
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Return the final result with the appropriate sign */
	return (result * sign);
}
