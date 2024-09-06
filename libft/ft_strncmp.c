/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:52:07 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/19 16:09:41 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_strncmp("bonjour", "jour", 2));
	printf("%d\n", ft_strncmp("bonjour", "jour", 7));
	return (0);
}*/
