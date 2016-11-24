#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *tmps;

	tmps = s;
	while(n > 0)
	{
		*tmps = 0;
		n--;
		tmps++;
	}
}

