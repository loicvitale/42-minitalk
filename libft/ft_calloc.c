/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:38:16 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/19 11:46:52 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (count && size > SIZE_MAX / count)
		return (NULL);
	tab = malloc(count * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}

/*int main(void)
{
	printf("%d\n", ft_calloc(5, 0) != NULL);
	printf("%d\n", ft_calloc(-5, -5) == NULL);
	printf("%d\n", ft_calloc(0, -5) != NULL);
	printf("%d\n", ft_calloc(-5, 0) != NULL);
}*/