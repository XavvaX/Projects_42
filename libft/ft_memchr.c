#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmps;

	tmps = s;
	while(n--)
	{
		if(*tmps == c)
			return((void *) tmps);
		tmps++;
	}
	return(NULL);
}

