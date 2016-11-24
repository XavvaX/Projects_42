#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strcat(char *dest, const char *src)
{
	dest = dest + strlen(dest);
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return(dest);	
}


