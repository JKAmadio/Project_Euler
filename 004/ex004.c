/*
**	A palindromic number reads the same both ways. The largest palindrome
**	made from the product of two 2-digit numbers is 9009 = 91 × 99.
**
**	Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>

int	ft_is_palindrome(int nbr);

int	main(void)
{
	int i;
	int j;
	int product;
	int greatest_palindrome;

	greatest_palindrome = 0;
	i = 999;
	while (i > 100)
	{
		j = i;
		while (j > 100)
		{
			product = i * j;
			if (ft_is_palindrome(product) == 1)
			{
				if (greatest_palindrome < product)
					greatest_palindrome = product;
				break ;
			}
			j--;
		}
		i--;
	}
	printf("%i\n", greatest_palindrome);
	return (0);
}

int	ft_is_palindrome(int nbr)
{
	int reverse;
	int reminder;
	int nbr_here;

	nbr_here = nbr;
	reverse = 0;
	while (nbr_here != 0)
	{
		reminder = nbr_here % 10;
		reverse = reverse * 10 + reminder;
		nbr_here /= 10;
	}
	if (reverse == nbr)
		return (1);
	return (0);
}
