/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitBill2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamaya <yhakamaya@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 00:30:25 by yhakamaya         #+#    #+#             */
/*   Updated: 2021/01/22 01:03:15 by yhakamaya        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "splitBill.h"

int main(void)
{
	int totalAmount = 0;
	int personCount;
	int *eachPayment;
	int paymentPerPerson;
	char **personName;

	printf("Enter the number of people: ");
	scanf("%d", &personCount);
	printf("The number of people: %d\n", personCount);
	if (MALLOC_ERR)
		putErrReturnZero();
	for (int i = 0; i < personCount; i++)
	{
		personName[i] = (char *)malloc(30);
		printf("Enter his/her first name: ");
		scanf("%s", personName[i]);
		printf("Enter his/her payment: ");
		scanf("%d", &eachPayment[i]);
		totalAmount += eachPayment[i];
		printf("%s: %d\n", personName[i], eachPayment[i]);
	}
	putLine('-');
	printf("Payment per person: %d\n", getPaymentPerPerson(totalAmount, paymentPerPerson));
	for (int i = 0; i < personCount; i++)
		printf("%s:\t%d\n", personName[i], (int)(paymentPerPerson - eachPayment[i]));
	puts("That\'s all.\n");
}
