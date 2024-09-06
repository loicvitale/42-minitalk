/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:42:54 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/20 11:17:26 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n-- > 0)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char s[] = {-128, 0, 127, 0};
	//char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	//char s3[] = {0, 0, 42, 0};

	printf("%d\n", ft_memcmp(s2, s, 1));
	return (0);
}*/