#include "funcoes.h"
#include <stdlib.h>

int	resolve(int mapa[4][4], int entry[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (duplo_check(mapa, pos, size) == 0)
		{
			mapa[pos / 4][pos % 4] = size;
			if (verificar_caso(mapa, pos, entry) == 0)
			{
				if (resolve(mapa, entry, pos + 1) == 1)
					return (1);
			}
			else
				mapa[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

void	mostra_solucao(int mapa[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(mapa[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int	mapa[4][4];
	int	*entry;
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			mapa[i][j] = 0;
			j++;
		}
		i++;
	}
	if (checar(argc, argv) == 1)
		return (0);
	entry = pega_numeros(argv[1]);
	if (resolve(mapa, entry, 0) == 1)
		mostra_solucao(mapa);
	else
		ft_putstr("Error\n");
	free(entry);
	return (0);
}
