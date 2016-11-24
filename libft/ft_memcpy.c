#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*tmpd;
	const char	*tmps;

	tmpd = dest;
	tmps = src;
	while(n--)
	{
		*tmpd = *tmps;
		tmpd++;
		tmps++;
	}
	return(dest);
}

