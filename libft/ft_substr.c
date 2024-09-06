/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:00:44 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/19 11:38:50 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	if (start > size)
		tab = malloc(sizeof(char));
	else if (size - start > len)
		tab = malloc(sizeof(char) * (len + 1));
	else
		tab = malloc(sizeof(char) * (size - start) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (start < size && i < len)
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}

/*int	main(void)
{
	char * s = ft_substr("tripouille", 100, 1);
	printf("%s\n", s);
	return (0);
}*/
