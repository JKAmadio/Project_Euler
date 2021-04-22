/*
**	The prime factors of 13195 are 5, 7, 13 and 29.
**
**	What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

int	ft_is_prime(long factor);

int	main(void)
{
	long i;
	long nbr;
	long greatest_factor;

	nbr = 600851475143;
	i = 3;
	while (i < 200283825047)
	{
		if (nbr % i == 0)
		{
			greatest_factor = nbr / i;
			if (ft_is_prime(greatest_factor))
			{
				printf("%li\n", greatest_factor);
				break ;
			}
		}
		i += 2;
	}
	return (0);
}

int	ft_is_prime(long factor)
{
	long i;

	i = 3;
	if (factor % 2 == 0)
		return (0);
	while (i < 200283825047 && i < factor)
	{
		if (factor % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
