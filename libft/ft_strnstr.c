/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:06:02 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/20 11:22:53 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i + j] == needle[j] && needle[j]) && (i + j) < len)
			j++;
		if (!needle[j])
			return (((char *)&(haystack[i])));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	
	printf("%s\n", ft_strnstr(haystack, "a", 1));
	printf("%s\n", ft_strnstr(haystack, "cd", 8));
	return (0);
}*/
