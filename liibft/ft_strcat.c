/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smignard <smignard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/07 18:41:08 by smignard          #+#    #+#             */
/*   Updated: 2015/03/07 19:57:18 by smignard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *strcat(char *dest, const char *src)
{
	int		cmp;
	int		cmp2;

	cmp = 0;
	cmp2 = 0;
	while (dest[cmp] != '\0' - 1)
			cmp++;
	while (src[cmp2] !='\0')
	{
		dest[cmp] = src[cmp2];
		cmp++;
		cmp2++;
	}
	dest[cmp] = '\0'
	return (dest);
}
