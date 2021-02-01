/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   771.Jewels_and_Stones.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:26:55 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/14 19:32:47 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int numJewelsInStones(char * J, char * S){
	size_t	count;
	int		i, j;

	for (i = 0, count = 0; S[i]; i++)
		for (j = 0; J[j]; j++)
			if (S[i] == J[j])
				count++;
	return count;
}
