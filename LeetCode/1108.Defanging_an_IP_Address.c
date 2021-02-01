/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1108.Defanging_an_IP_Address.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:03:35 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/08 19:47:21 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*defangIPaddr(char *address) {
	int		i, j;
	size_t	len;
	char	*res;

	len = strlen(address);
	res = (char *)malloc(sizeof(char) * (len + 7));
	i = 0;
	j = 0;
	while (address[i]) {
		if (address[i] == '.') {
			res[j] = '[';
			res[++j] = '.';
			res[++j] = ']';
		}
		else
			res[j] = address[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return res;
}
