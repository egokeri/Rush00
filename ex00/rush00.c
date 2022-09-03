/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egokeri <egokeri@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:04:33 by egokeri           #+#    #+#             */
/*   Updated: 2022/08/28 13:47:37 by egokeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printrush(int uzunluk, char ilk, char orta, char son)
{
	int	harf_sayac;

	harf_sayac = 1;
	while (harf_sayac <= uzunluk)
	{
		if (harf_sayac == 1)
			ft_putchar(ilk);
		else if (harf_sayac == uzunluk)
			ft_putchar(son);
		else
			ft_putchar(orta);
		harf_sayac++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	satir_sayac;

	satir_sayac = 1;
	if (x >= 1 && y >= 1)
	{
		while (satir_sayac <= y)
		{
			if (satir_sayac == 1)
				printrush(x, 'o', '-', 'o');
			else if (satir_sayac == y)
				printrush(x, 'o', '-', 'o');
			else
				printrush(x, '|', ' ', '|');
			satir_sayac++;
		}
	}
}
