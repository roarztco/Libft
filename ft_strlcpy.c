#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t len;
    
    if(dstsize == 0)
        return 0;
    len = ft_strlen(src);
    i = 0;
    while(src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return len;
}