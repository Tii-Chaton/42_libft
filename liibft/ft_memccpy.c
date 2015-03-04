#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;

	s1ptr = (unsigned char *)dest;
	s2ptr = (unsigned char *)src;
	while (n--)
	{
		*s1ptr = *s2ptr;
		s1ptr++;
		if (*s1ptr == (unsigned char)c)
			return (s1ptr);
		s2ptr++;
	}
	return (NULL);
}
