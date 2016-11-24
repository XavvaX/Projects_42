#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*tmph;
	size_t		i;

	tmph = haystack;
	i = strlen(needle);
	while(*tmph)
	{
		if (memcmp(tmph, needle, i) == 0)
			return((char *) tmph);
		tmph++;
	}
	return(NULL);
}

