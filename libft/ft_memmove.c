/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:38:30 by lvitale           #+#    #+#             */
/*   Updated: 2023/11/21 09:07:42 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_move_forward(char *dst, const char *src, size_t len)
{
	while (len--)
	{
		*dst = *src;
		dst++;
		src++;
	}
}

static void	ft_move_backward(char *dst, const char *src, size_t len)
{
	dst += len;
	src += len;
	while (len--)
	{
		dst--;
		src--;
		*dst = *src;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (len < 1 || d == s)
		return (dst);
	if (d < s)
		ft_move_forward(d, s, len);
	else
		ft_move_backward(d, s, len);
	return (dst);
}

/*int	main(void)
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	memmove(s, s + 2, 0);
	return (0);
}*/
