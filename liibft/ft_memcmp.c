/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :;:      :;:    :;:   */
/*                                                    :;: :;:         :;:     */
/*   By: smignard <smignard@student.42.fr>          :;:  :;:       :;:        */
/*                                                :;:::::;:::   :;:           */
/*   Created: 2015/03/08 17:55:32 by smignard          :;:    :;:             */
/*   Updated: 2015/03/08 18:35:00 by smignard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;

	p1 =(const unsigned char *) s1;
	p2 =(const unsigned char *) s2;
	while (n--)
	{
		if (*p1 != *p2)
			return ((unsigned char)*p1 - (unsigned char)*p2);
		p1++;
		p2++;
	}
	return (0);
}
// fonction memcmp() compare les n premiers octets des zones mémoire s1 et s2. 
// Elle renvoie un entier inférieur, égal, ou supérieur à zéro, si s1 est
// respectivement inférieure, égale ou supérieur à s2.
// La fonction memcmp() renvoie un entier négatif, nul ou positif si les n
//  premiers octets de s1 sont respectivement inférieurs, égaux ou supérieurs 
//  aux n premiers octets de s2. 
