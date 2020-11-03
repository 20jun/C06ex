/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 01:53:46 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/03 02:07:42 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc > 0)
	{
		while (argv[i] != '\0')
			i++;
		i--;
		while (i >= 1)
		{
			ft_putchar(argv[i]);
			i--;
		}
	}
}
