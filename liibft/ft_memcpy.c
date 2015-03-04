void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *ptr;
	unsigned char *ptr2;

	i = 0;
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while (i < n)
	{
		ptr2[i] = ptr[i];
		i++;
	}
	return (dest);
}
