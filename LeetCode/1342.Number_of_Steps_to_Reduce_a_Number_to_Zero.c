/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1342.Number_of_Steps_to_Reduce_a_Number_t          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:19:59 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/14 19:24:27 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int numberOfSteps (int num){
	size_t	count;

	for (count = 0; num; count++)
		num = num % 2 == 0 ? num / 2 : num - 1;
	return count;
}
