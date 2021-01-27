/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitBill.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamaya <yhakamaya@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:31:05 by yhakamaya         #+#    #+#             */
/*   Updated: 2021/01/22 01:01:17 by yhakamaya        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPLITBILL_H
#define SPLITBILL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MALLOC_ERR !(personName = (char **)malloc(personCount)) || !(eachPayment = (int *)malloc(personCount))

bool	isNum(char c);
int		putErrReturnZero(void);
void	putLine(char c);
int	getPaymentPerPerson(int totalAmount, int paymentPerPerson);

#endif
