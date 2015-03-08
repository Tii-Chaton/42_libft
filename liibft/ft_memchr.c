//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :::      :;:    :;:   */
/*                                                    ::: :::         :;;     */
/*   By: smignard <smignard@student.42.fr>          :;:  :;:       :;;        */
/*                                                ::;::::;:::   :;;           */
/*   Created: 2015/03/08 12:08:38 by smignard          :::    :;:             */
/*   Updated: 2015/03/08 17:54:34 by smignard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*p1;

	i = 0;
	p1 = (const char *)s
	while (i < n)
	{
		if (p1[i] == (const char)c)
			return ((void *)((size_t)p + i));
		i++;
	}
	return (NULL);
}
//La fonction memchr() examine les n premiers octets de la zone mémoire pointée
//par s à la recherche du caractère c. Le premier octet correspondant à c 
//(interprété comme un unsigned char) arrête l'opération.
