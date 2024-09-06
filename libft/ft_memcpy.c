/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:19:59 by lvitale           #+#    #+#             */
/*   Updated: 2023/10/20 10:52:57 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!src && !dst)
		return (NULL);
	while (n > 0)
	{
		((char *) dst)[n - 1] = ((char *) src)[n - 1];
		n--;
	}
	return (dst);
}

/*int	main(int ac, char **av)
{  
    int	tab[7] = {1, 2, 3, 4, 5, 6, 7};
    //char tab[] = "abcdefg";
    ft_memcpy(&tab[0], &tab[3], 4*sizeof(int) );
    for ( int i = 0 ; i < 7 ; ++i )
        printf( "%d ", tab[i] );
    return (0);
}*/