/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:10:08 by inwagner          #+#    #+#             */
/*   Updated: 2022/07/19 14:10:13 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[] = "abc123ABC#";
	//char	str[] = "";
	//char	str[] = "abc";

	printf("%i", ft_str_is_alpha(str));
}

//gcc -Wall -Wextra -Werror *.c&& ./a.out
//norminette -R ForbiddenCheckHeaderSource
//echo $?