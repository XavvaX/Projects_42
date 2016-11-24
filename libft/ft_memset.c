#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while(n > 0)
	{
		*tmp = c;
		tmp++;
		n--;
	}
	return (s);
}
