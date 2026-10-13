#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *ptdst;
    const unsigned char *ptsrc;

    ptdst = (unsigned char *)dest;
    ptsrc = (const unsigned char *)src;
    if (dest == src || n == 0)
        return dest;
    if(ptdst > ptsrc)
    {
        i = n;
        while(i > 0)
        {
            i--;
            ptdst[i] = ptsrc[i];
        }
    }
    else if( ptdst < ptsrc)
    {
        i = 0;
        while(i < n)
        {
            ptdst[i] = ptsrc[i];
            i++;
        }
    }
    return dest;
}
