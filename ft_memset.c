#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pt[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
int main(void){
	int n = 13 ;
	ft_memset( n ,337, 4);
} 