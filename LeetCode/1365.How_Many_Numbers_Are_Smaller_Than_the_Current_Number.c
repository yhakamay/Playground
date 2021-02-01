/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1365.How_Many_Numbers_Are_Smaller_Than_th          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:55:57 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/14 20:13:51 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
	int	*ret;
	int	i, j, c;

	(*returnSize) = numsSize;
	ret = (int *)malloc(sizeof(int) * (*returnSize));
	for (i = 0; i < numsSize; i++) {
		c = 0;
		for (j = 0; j < numsSize; j++) {
			if (j == i)
				continue ;
			if (nums[i] > nums[j])
				c++;
		}
		ret[i] = c;
	}
	return ret;
}
