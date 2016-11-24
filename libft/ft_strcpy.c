#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	while((*dest = *src))
	{
		dest++;
		src++;
	}
	return(dest);
}

