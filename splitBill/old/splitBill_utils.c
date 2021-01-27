/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitBill2_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamaya <yhakamaya@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:31:56 by yhakamaya         #+#    #+#             */
/*   Updated: 2021/01/22 00:54:57 by yhakamaya        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "splitBill.h"

bool	isNum(char c)
{
	return (c >= '0' && c <= '9');
}

int		putErrReturnZero(void)
{
	puts("Something went wrong... Try again.");
	return 0;
}

void	putLine(char c)
{
	printf("\n");
	for (size_t i = 0; i < 5; i++)
		printf("%c", c);
}

int	getPaymentPerPerson(int totalAmount, int paymentPerPerson)
{
	return totalAmount / paymentPerPerson;
}
