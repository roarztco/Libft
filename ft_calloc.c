#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	total;
	char	*pt;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	total = nmemb * size;
	if (total == 0)
		total = 1;
	pt = malloc(total);
	if (pt == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		pt[i] = 0;
		i++;
	}
	return (pt);
}