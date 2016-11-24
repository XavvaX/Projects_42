#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;
	size_t		i;

	tmpd = (unsigned char *) dest;
	tmps = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		(*tmpd + i) == (*tmps + i);
		if ((*tmps + i) == (unsigned char) c)
			return (tmpd + i + 1);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	src[] = "test basic du memccpy !";
	char	buff1[22];
	char	buff2[22];

	ft_memccpy(buff1, src, 'm', 6);
	printf("%s\n", buff1);
	ft_memccpy(buff2, src, 'm', 6);
	printf("%s\n", buff2);
}

