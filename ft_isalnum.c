/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizerese <sizerese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:29:30 by sizerese          #+#    #+#             */
/*   Updated: 2023/07/30 21:44:33 by sizerese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
// int main(void)
// {
//     printf("%d\n", ft_isalnum('.'));
//     printf("%d\n", ft_isalnum('e'));
//     printf("%d\n", ft_isalnum('@'));

// }