#include "libft.h"

int	ft_character(const char *str)
{
	int i;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int i;
	int nb;
	int a;

	i = ft_character(nptr);
	nb = 0;
	a = 1;
	if (nptr[i] == '-')
		a = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <='9')
	{
		nb = nb * 10 + nptr[i] - '0';
		i++;
	}
	return (nb * a);
}
