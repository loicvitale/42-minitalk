/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:03:44 by lvitale           #+#    #+#             */
/*   Updated: 2023/11/21 09:07:19 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_numbers(long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*nb_char;
	long	nb1;

	i = 0;
	nb1 = n;
	if (n < 0)
		nb1 = nb1 * -1;
	if (n == 0 || n < 0)
		i++;
	i += ft_count_numbers(nb1);
	nb_char = malloc((i + 1) * sizeof(char));
	if (!nb_char)
		return (NULL);
	nb_char[i--] = '\0';
	while (i >= 0)
	{
		nb_char[i--] = (nb1 % 10) + '0';
		nb1 = nb1 / 10;
	}
	if (n < 0)
		nb_char[0] = '-';
	return (nb_char);
}

/*int	main(void)
{
	char	*s;

	s = ft_itoa(0);
	printf("%s\n", s);
	return (0);
}*/
