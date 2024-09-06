/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:56:54 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/20 11:34:11 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&(((unsigned char *)s)[i]));
		i++;
	}
	return (NULL);
}

/*int	main() {
    char buffer[] = "Bonjourj";
    char search_char = 'j';
    const void *result;

    // Utilisation de memchr pour rechercher 't' dans la chaîne buffer
    result = ft_memchr(buffer, search_char, strlen(buffer));

    if (result != NULL) {
        printf("Le caractère '%c' a été trouvé à l'adresse: \
		%p\n", search_char, result);
    } else {
        printf("Le caractère '%c' n'a pas été trouvé.\n", search_char);
    }

	result = memchr(buffer, search_char, strlen(buffer));

    if (result != NULL) {
        printf("Le caractère '%c' a été trouvé à l'adresse: \
		%p\n", search_char, result);
    } else {
        printf("Le caractère '%c' n'a pas été trouvé.\n", search_char);
    }
    return 0;
}*/