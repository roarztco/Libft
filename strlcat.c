#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = ft_strlen(dst);
    if(i >= dstsize)
        return dstsize + ft_strlen(src);
    j = 0;
    while(src[j] && i < dstsize -1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst [i] = '\0';
    return (i + )
}