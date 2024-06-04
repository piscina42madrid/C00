/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:29:10 by luis              #+#    #+#             */
/*   Updated: 2024/06/04 11:29:14 by luis             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nu;

	nu = nb;
	if (nu < 0)
	{
		ft_putchar('-');
		nu = -nu;
	}
	if (nu / 10 != 0)
		ft_putnbr(nu / 10);
	ft_putchar(nu % 10 + 48);
}

int	main()
{
	ft_putnbr(5849);

	return (0);
}