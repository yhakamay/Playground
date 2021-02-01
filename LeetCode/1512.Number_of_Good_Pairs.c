/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1512.Number_of_Good_Pairs.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:06:09 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/08 20:10:58 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int numIdenticalPairs(int* nums, int numsSize){
	int		i, j;
	size_t	count;

	count = 0;
	for (i = 0; i < numsSize - 1; i++) {
		for (j = 1; j < numsSize; j++) {
			if (nums[i] == nums[j] && i < j)
				count++;
		}
	}
	return count;
}
