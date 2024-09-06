/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:42:06 by lvitale           #+#    #+#             */
/*   Updated: 2023/11/21 09:08:11 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_free(char **tab, int words)
{
	while (words)
	{
		free(tab[words - 1]);
		words--;
	}
	free(tab);
	return (1);
}

static char	*ft_strndup(char *src, int n)
{
	int		len;
	int		i;
	char	*tab;

	i = 0;
	len = ft_strlen(src);
	tab = malloc((n + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (src[i] && i < n)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

static int	ft_count_words(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (str[0] != c && str[0] != '\0')
		words++;
	while (str[i])
	{
		if (str[i] == c
			&& str[i + 1] != c
			&& str[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	int		nb_words;
	char	**tab;

	nb_words = ft_count_words(((char *)str), c);
	tab = malloc ((nb_words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i] && k < nb_words)
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] != c && str[i] != '\0')
			i++;
		tab[k] = ft_strndup(((char *)&(str[j])), i - j);
		if (!tab[k++] && ft_free(tab, k))
			return (NULL);
	}
	tab[nb_words] = NULL;
	return (tab);
}

/*int	main(void)
{
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split("  t  4  ", ' ');
	if (tab)
	{
		while (tab[i])
		{
			write (1, tab[i], ft_strlen(tab[i]));
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
}*/