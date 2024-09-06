/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:46:53 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/19 10:04:13 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*tab;
	int		s1_size;
	int		s2_size;
	int		j;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	tab = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < s1_size)
	{
		tab[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_size)
	{
		tab[i + j] = s2[j];
		j++;
	}
	tab[i + j] = '\0';
	return (tab);
}

/*int	main(void)
{
	char	*s;

	s = ft_strjoin("tripouille", "42");
	printf("%s\n", s);
	return (0);
}*/
