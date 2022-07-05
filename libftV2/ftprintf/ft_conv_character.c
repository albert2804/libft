/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_character.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestraic <aestraic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:07:47 by aestraic          #+#    #+#             */
/*   Updated: 2022/05/26 18:36:50 by aestraic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_conv_character(va_list arg_list)
{
	unsigned int	c;

	c = va_arg(arg_list, int);
	ft_putchar_fd(c, 1);
	return (1);
}