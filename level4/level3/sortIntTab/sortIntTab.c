/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortIntTab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 14:10:24 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 16:44:41 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sortIntTab(int *tab, unsigned int size) {
	unsigned int	i = 0;
	int				greaterThanFlag;
	int				store;

	size--;
	while (i < size) {
		greaterThanFlag = 0;
		if (tab[i] > tab[i + 1]) {
			store = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = store;
			i = 0;
			greaterThanFlag = 1;
		}
		if (!greaterThanFlag) {
			i++;
		}
	}
}
