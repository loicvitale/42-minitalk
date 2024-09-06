/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvitale <lvitale@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:09:14 by lvitale           #+#    #+#             */
/*   Updated: 2023/12/04 10:23:10 by lvitale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

static void	action(int sig)
{
	static int	received = 0;

	if (sig == SIGUSR1)
		++received;
	else if (sig == SIGUSR2)
	{
		ft_putnbr_fd(received, 1);
		ft_putchar_fd('\n', 1);
		exit(0);
	}
	else
	{
		ft_putstr_fd("Une erreur est survenue\n", 1);
		exit(0);
	}
}

static void	mt_kill(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(100);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR1);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_strlen(argv[2]))
		return (1);
	if (ft_atoi(argv[1]) < 1)
		return (ft_putstr_fd("Le PID du serveur n'est pas valide\n", 1), 1);
	ft_putstr_fd("Envoi au serveur : ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Confirmation du serveur : ", 1);
	signal(SIGUSR1, action);
	signal(SIGUSR2, action);
	mt_kill(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}
