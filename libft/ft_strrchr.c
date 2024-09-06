/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:40:59 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/19 13:33:42 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	c = c % 256;
	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	if (j != -1)
		return ((char *)(s + j));
	return (NULL);
}

/*int	main(void)
{
	char s[] = "tripouille";
	
	printf("%s\n", strrchr(s, 'l'));
	return (0);
}*/