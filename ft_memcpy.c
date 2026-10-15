#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptsrc;
	unsigned char		*ptdst;

	ptdst = (unsigned char *)dest;
	ptsrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptdst[i] = ptsrc[i];
		i++;
	}
	return (dest);
}

int main(void){
	char p[6];
	ft_memcpy(p, "roarz", 5);
	printf("%s\n", p);
}