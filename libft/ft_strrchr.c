#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *tmps;

	tmps = s + strlen(s);
	while(tmps >= s)
	{
		if(*tmps == (char) c)
			return((char *) tmps);
		tmps--;
	}
	return(NULL);
}

