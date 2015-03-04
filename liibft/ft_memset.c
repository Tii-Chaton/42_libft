include <libft.h>

void *ft_memset (void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*p1;

	i = 0;
	p1 = (unsigned char *)s;
	while(1 < n)
	{
		p1[i] = c;
		i++;
	}
	return(s);
}
