/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1528.Shuffle_String.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:34:13 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/14 19:44:39 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *restoreString(char *s, int *indices, int indicesSize){
	char	*ret;
	int		i;

	ret = (char *)malloc(sizeof(char) * (indicesSize + 1));
	for (i = 0; i < indicesSize; i++)
		ret[indices[i]] = s[i];
	ret[i] = '\0';
	return ret;
}
