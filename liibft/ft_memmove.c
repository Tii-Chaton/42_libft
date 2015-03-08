/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :::      :;:    :;:   */
/*                                                    ::: :::         :;;     */
/*   By: smignard <smignard@student.42.fr>          :;:  :;:       :;;        */
/*                                                ::;::::;:::   :;;           */
/*   Created: 2015/03/08 12:08:38 by smignard          :::    :;:             */
/*   Updated: 2015/03/08 15:38:24 by smignard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char *cpy;
	char *p1;

	i = 0;
	p1 = (char *)dest;
	cpy = (char *)malloc(sizeof(char *) * len);
	while (i <= len)
	{
		cpy[i] = dest[i];
		i++;	
	}
	while (len--)
		p1[len] = cpy[len]
	return (dest);
}

//La fonction memmove() copie n octets depuis la zone mémoire src vers la zone 
//mémoire dest. Les deux zones peuvent se chevaucher : la copie se passe comme si
//les octets de src étaient d'abord copiés dans une zone temporaire qui ne
//chevauche ni src ni dest, et les octets sont ensuite copiés de la zone temporaire vers dest.
