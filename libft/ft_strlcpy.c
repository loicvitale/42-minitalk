/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:49:50 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/17 10:28:54 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		src_length;

	src_length = ft_strlen(src);
	if (!src | !dst | dstsize < 1)
		return (src_length);
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_length);
}

/*int	main(void)
{
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);

	strlcpy(dest, src, 0);
	return (0);
}*/