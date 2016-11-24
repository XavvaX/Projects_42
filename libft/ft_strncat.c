#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	dest = dest + strlen(dest);

	while(*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return(dest);
}

