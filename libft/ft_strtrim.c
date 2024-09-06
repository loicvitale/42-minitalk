/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:05:00 by lvitale           #+#    #+#             */
/*   Updated: 2023/11/21 09:08:29 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*tab;
	int		size;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	while (j >= 0 && s1[j] && ft_is_set(s1[j], set))
		j--;
	size = j - i;
	if (size < 0)
		size = -1;
	tab = malloc((size + 2) * sizeof(char));
	if (!tab)
		return (NULL);
	j = 0;
	while (j <= size)
	{
		tab[j] = s1[j + i];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

/*int	main(void)
{
	char	*s;

	s = ft_strtrim("abcdba", "acb");
	printf("%s\n", s);
	return (0);
}*/
