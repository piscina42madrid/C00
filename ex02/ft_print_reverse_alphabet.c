/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:37:26 by luis              #+#    #+#             */
/*   Updated: 2024/06/04 13:37:27 by luis             ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    a;

    a = 'z';
    while (a >= 'a')
    {
        write(1, &a, 1);
        a--;
    }
}