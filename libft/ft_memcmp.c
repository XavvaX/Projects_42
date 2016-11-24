#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *tmps1;
	const char *tmps2;

	tmps1 = s1;
	tmps2 = s2;
	while(n--)
	{
		if(*tmps1 != *tmps2)
		{
			if(*tmps1 < *tmps2)
				return(-1);
			else
				return(1);
		}
		tmps1++;
		tmps2++;
	}
	return(0);
}

