/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <alnoukan@student.42lausanne.ch>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 00:15:00 by anoukan           #+#    #+#             */
/*   Updated: 2026/06/25 00:19:22 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	int		i;
	char	**arg;

	i = ac - 1;
	arg = av;
	if (ac > 1)
	{
		while (i > 0 && arg[i])
		{
			ft_putstr(av[i]);
			i--;
		}
	}
	return (0);
}
